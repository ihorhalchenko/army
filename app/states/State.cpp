#include "State.h"

State::State() {};
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

void State::setContext(Unit* unit) {
    m_unit = unit;
}

void State::setType(Type type) {
    m_type = type;
}

State::Type State::getType() const {
    return m_type;
}
