#include "MerlinEngine.h"
#include "Engine.h"

MerlinEngine::MerlinEngine(string name) {
    this->name = name;
}

MerlinEngine::~MerlinEngine() {
    
}
MerlinEngine *MerlinEngine:: clone() {
    return new MerlinEngine(this->name);
}