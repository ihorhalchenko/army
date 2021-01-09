#include "../../states/DefaultState.h"
#include "Soldier.h"

Soldier::Soldier(const std::string& name) : Unit(name) {
    addUnitType(Unit::TYPE_SOLDIER);
    setState(new DefaultState(this));
}

Soldier::~Soldier() {}
