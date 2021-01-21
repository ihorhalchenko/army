#include "../Exceptions.h"
#include "../units/race/Demon.h"
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

 void State::transform(Unit* unit) {
     throw UnitCantDoThis();
 }

 Demon State::callDemon(const std::string& name) {
     throw UnitCantDoThis();
 }

 void State::setName(Name type) {
    m_name = type;
}

State::Name State::getName() const {
    return m_name;
}

