#include "../../states/VampireState.h"
#include "Vampire.h"

Vampire::Vampire(const std::string& name) : Unit(name) {
    addUnitType(Unit::TYPE_UNDEAD);
    addUnitType(Unit::TYPE_VAMPIRE);
    setState(new VampireState(this));
}

Vampire::~Vampire() {}
