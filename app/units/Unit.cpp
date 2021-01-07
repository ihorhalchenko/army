#include "Unit.h"

Unit::Unit(const std::string& name, int damageValue, int hitPoints, int hitPointsLimit) 
    : m_name(name), 
    m_hitPoints(hitPoints), 
    m_hitPointsLimit(hitPointsLimit),
    m_damage(new Damage(damageValue, Damage::TYPE_PHYSICAL)),
    m_state(new DefaultState()) {
        m_unitTypes.insert(Unit::TYPE_UNIT);
    }

Unit::~Unit() {
    delete m_state;
    delete m_damage;
}

void Unit::ensureIsAlive() {
    if ( m_hitPoints == 0 ) {
       throw UnitIsDead();
   }
}

void Unit::setState(State* state) {
    if ( m_state) {
        delete m_state;
    }

    m_state = state;
    m_state->setContext(this);
}

void Unit::addUnitType(Unit::Type type) {
    m_unitTypes.insert(type);
}

std::set<Unit::Type> Unit::getUnitType() const {
    return m_unitTypes;
}

int Unit::getDamageValue() const {
    return m_damage->getValue();
}

Damage* Unit::getDamage() const {
    return m_damage;
}

int Unit::getHitPoints() const {
    return m_hitPoints;
}

int Unit::getHitPointsLimit() const {
    return m_hitPointsLimit;
}

const std::string& Unit::getName() const {
    return m_name;
}

State* Unit::getState() const {
    return m_state;
}

void Unit::setHitPoints(int hp) {
    m_hitPoints = hp;
}

void Unit::setHitPointsLimit(int hp) {
    m_hitPointsLimit = hp;
}

void Unit::setDamageValue(int value) {
    if ( m_damage ) {
        delete m_damage;
    }
    m_damage = new Damage(value, Damage::TYPE_PHYSICAL);
}

void Unit::addHitPoints(int hp) {
    ensureIsAlive();
    
    if ( hp < 1 ) {
        return;
    }

    int result = m_hitPoints + hp;

    if ( result > m_hitPointsLimit ) {
        m_hitPoints = m_hitPointsLimit;
        return;
    }
    m_hitPoints = result;
}

void Unit::reduceHitPoints(int hp) {
    ensureIsAlive();

    if ( hp > m_hitPoints ) {
        m_hitPoints = 0;
        return;
    }
    m_hitPoints -= hp;
}

void Unit::attack(Unit& enemy) {
    ensureIsAlive();
    
    m_state->attack(enemy, *m_damage);
}

void Unit::counterAttack(Unit& enemy) {
    ensureIsAlive();

    m_state->counterAttack(enemy, *m_damage);
}

void Unit::takeDamage(const Damage& dmg) {
    ensureIsAlive();

    m_state->takeDamage(dmg);
}

void Unit::turnIntoWolf() {
    ensureIsAlive();

    m_state->turnIntoWolf();
}

void Unit::turnIntoHuman() {
    ensureIsAlive();

    m_state->turnIntoHuman();
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << "Name: " << unit.getName() << std::endl;
    out << "Damage: " << unit.getDamageValue() << std::endl;
    out << "Hit Points: " << unit.getHitPoints() << std::endl;
    out << "Hit Points Limit: " << unit.getHitPointsLimit() << std::endl;

    return out;
}
