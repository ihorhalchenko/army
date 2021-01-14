#include "../../states/DefaultState.h"
#include "Rogue.h"

Rogue::Rogue(const std::string& name) : Unit(name) {
    addUnitType(Unit::TYPE_ROGUE);
    setState(new DefaultState(this));
}

Rogue::~Rogue() {}
