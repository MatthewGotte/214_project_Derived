RED='\033[0;31m'
BLUE='\033[0;36m'
GREEN='\033[0;32m'
NC='\033[0m'

rm -f -r filelist.txt CMakeLists.txt CMakeCache.txt cmake_install.cmake Makefile CMakeFiles main;

ls *.h *.cpp > filelist.txt;

touch CMakeLists.txt;
echo 'cmake_minimum_required(VERSION 3.16)' >> CMakeLists.txt;
echo 'project(Derived)' >> CMakeLists.txt;
echo 'find_package(GTest REQUIRED)' >> CMakeLists.txt;
echo 'include_directories(${GTEST_INCLUDE_DIRS})' >> CMakeLists.txt;
echo 'add_executable( main ' >> CMakeLists.txt;
less filelist.txt >> CMakeLists.txt;
echo ')' >> CMakeLists.txt;
echo 'target_link_libraries(main ${GTEST_LIBRARIES} pthread)' >> CMakeLists.txt;
rm -f filelist.txt;
printf "${GREEN}Built CMakeLists.txt${NC}\n";
printf "${RED}trying => cmake CMakeLists.txt${NC}\n";
cmake CMakeLists.txt;
printf "${BLUE}cmake CMakeLists.txt => completed.${NC}\n";

echo 'run:' >> Makefile;
echo -e '\t./main' >> Makefile;
echo 'gdb:' >> Makefile;
echo -e '\tgdb main' >> Makefile;
echo 'valgrind:' >> Makefile;
echo -e '\tvalgrind --leak-check=full ./main'  >> Makefile;
echo 'rebuild:' >> Makefile;
echo -e '\t./rebuild.sh' >> Makefile