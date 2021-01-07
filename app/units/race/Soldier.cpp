#include "Soldier.h"

Soldier::Soldier (const std::string& name) : Unit(name) {
    addUnitType(UNIT_TYPE_SOLDIER);
    setAttackStrategy(new DefaultAttack());
    setCounterAttackStrategy(new DefaultCounterAttack());
    setTakeDamageStrategy(new DefaultTakeDamage());
    setState(0);
}
