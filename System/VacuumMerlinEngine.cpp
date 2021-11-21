#include "VacuumMerlinEngine.h"
#include "Engine.h"

int VacuumMerlinEngine::counter = 1000;
/**
 * @brief 
 * @author Derived 
 * @return VacuumMerlinEngine* 
 */
VacuumMerlinEngine *VacuumMerlinEngine::clone() {
    return new VacuumMerlinEngine();
}
/**
 * @brief Construct a new Vacuum Merlin Engine:: Vacuum Merlin Engine object
 * @author Derived
 */
VacuumMerlinEngine::VacuumMerlinEngine() {
    id = ++counter;
}
/**
 * @brief Destroy the Vacuum Merlin Engine:: Vacuum Merlin Engine object
 * @author Derived 
 */
VacuumMerlinEngine::~VacuumMerlinEngine(){

}


