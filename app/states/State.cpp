#include "../Exceptions.h"
#include "State.h"

State::State(Unit* unit) {
    m_unit = unit;
};

State::~State() {};

void State::attack(Unit& enemy, const Damage& dmg) {
    throw UnitCantDoThis();
}

void State::counterAttack(Unit& enemy, const Damage& attackDmg) {
    throw UnitCantDoThis();
}

void State::takeDamage(const Damage& dmg) {
    throw UnitCantDoThis();
}

void State::turnIntoWolf() {
    throw UnitCantDoThis();
}

void State::turnIntoHuman() {
    throw UnitCantDoThis();
}

 Unit* State::getUnit() const {
     return m_unit;
 }
