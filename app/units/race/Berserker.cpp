#include "../../states/BerserkerState.h"
#include "Berserker.h"

Berserker::Berserker(const std::string& name) : Unit(name) {
    addUnitType(Unit::TYPE_BERSERKER);
    setState(new BerserkerState(this));
}

Berserker::~Berserker() {}
