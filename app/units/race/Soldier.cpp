#include "Soldier.h"

Soldier::Soldier (const std::string& name) : Unit(name) {
    this->addUnitType(UNIT_TYPE_SOLDIER);

    this->setAttackStrategy(new DefaultAttack());
    this->setTakeDamageStrategy(new DefaultTakeDamage());
    this->setCounterAttackStrategy(new DefaultCounterAttack());
}
