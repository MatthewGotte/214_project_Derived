#ifndef COLOURS_H
#define COLOURS_H

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

/*
This is a class used for the output of code
Pass in the code string you want and the colour will be changed 
Example use:
  cout<<Colours::purple("hello World")<<endl; 
The code above will print the text hello World in the colour purple. 
*/
class Colours
{
    public:

        /**
         * @brief Changes the Colour of the String
         * @author Derived
         * @param s 
         * @return string 
         */
        static string black(string s) {
            string output = "\033[30m" + s + "\033[0m";
            return output;
        }

        /**
         * @brief Changes the Colour of the String
         * @author Derived
         * @param s 
         * @return string 
         */
        static string red(string s) {
            string output = "\033[31m" + s + "\033[0m";
            return output;
        }
        
        /**
         * @brief Changes the Colour of the String
         * @author Derived
         * @param s 
         * @return string 
         */
        static string green(string s) {
            string output = "\033[32m" + s + "\033[0m";
            return output;
        }
        
        /**
         * @brief Changes the Colour of the String
         * @author Derived
         * @param s 
         * @return string 
         */
        static  string yellow(string s) {
            string output = "\033[33m" + s + "\033[0m";
            return output;
        }
        
        /**
         * @brief Changes the Colour of the String
         * @author Derived
         * @param s 
         * @return string 
         */
        static string blue(string s) {
            string output = "\033[34m" + s + "\033[0m";
            return output;
        }
        
        /**
         * @brief Changes the Colour of the String
         * @author Derived
         * @param s 
         * @return string 
         */
        static string purple(string s) {
            string output = "\033[35m" + s + "\033[0m";
            return output;
        }
        
        /**
         * @brief Changes the Colour of the String
         * @author Derived
         * @param s 
         * @return string 
         */
        static string cyan(string s) {
            string output = "\033[36m" + s + "\033[0m";
            return output;
        }

};

#endif