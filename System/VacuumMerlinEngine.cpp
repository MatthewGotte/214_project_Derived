
#include "VacuumMerlinEngine.h"
#include "Engine.h"

int VacuumMerlinEngine::counter = 1000;
/**
 * @brief 
 * @author Takudzwanashe Dylan Muguti
 * @return VacuumMerlinEngine* 
 */
VacuumMerlinEngine *VacuumMerlinEngine::clone() {
    return new VacuumMerlinEngine();
}
/**
 * @brief Construct a new Vacuum Merlin Engine:: Vacuum Merlin Engine object
 * @author Takudzwanashe Dylan Muguti
 */
VacuumMerlinEngine::VacuumMerlinEngine() {
    id = ++counter;
}
/**
 * @brief Destroy the Vacuum Merlin Engine:: Vacuum Merlin Engine object
 * @author Takudzwanshe Dylan Muguti
 */
VacuumMerlinEngine::~VacuumMerlinEngine(){

}


