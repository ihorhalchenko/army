#include "Unit.h"

Unit::Unit(const std::string& name, int damageValue, int hitPoints, int hitPointsLimit) 
    : m_name(name), m_hitPoints(hitPoints), m_hitPointsLimit(hitPointsLimit) {
        m_damage = new Damage(damageValue, PHYSICAL_DAMAGE);
        m_unitTypes.insert(UNIT_TYPE_UNIT);
    }

Unit::~Unit() {
        delete m_state;
        delete m_damage;
        delete m_attackStrategy;
        delete m_takeDamageStrategy;
        delete m_counterAttackStrategy;
}

void Unit::ensureIsAlive() {
    if ( m_hitPoints == 0 ) {
       throw UnitIsDead();
   }
}

void Unit::setState(State* state) {
    m_state = state;
}

void Unit::setAttackStrategy(IAttack* attackStrategy) {
    m_attackStrategy = attackStrategy;
}

void Unit::setTakeDamageStrategy(ITakeDamage* takeDamageStrategy) {
    m_takeDamageStrategy = takeDamageStrategy;
}

void Unit::setCounterAttackStrategy(ICounterAttack* counterAttackStrategy) {
    m_counterAttackStrategy = counterAttackStrategy;
}

IAttack* Unit::getAttackStrategy() const {
    return m_attackStrategy;
}

ITakeDamage* Unit::getTakeDamageStrategy() const {
    return m_takeDamageStrategy;
}

ICounterAttack* Unit::getCounterAttackStrategy() const {
    return m_counterAttackStrategy;
}

void Unit::addUnitType(UnitType type) {
    m_unitTypes.insert(type);
}

 std::set<UnitType> Unit::getUnitType() const {
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

void Unit::setHitPoints(int hp) {
    m_hitPoints = hp;
}

void Unit::setHitPointsLimit(int hp) {
    m_hitPointsLimit = hp;
}

void Unit::setDamageValue(int value) {
    m_damage = new Damage(value, PHYSICAL_DAMAGE);
}

void Unit::attack(Unit& enemy) {
    ensureIsAlive();
    
    m_attackStrategy->attack(*this, enemy, *m_damage);
}

void Unit::counterAttack(Unit& enemy) {
    ensureIsAlive();

    m_counterAttackStrategy->counterAttack(*this, enemy, *m_damage);
}

void Unit::takeDamage(const Damage& dmg) {
    ensureIsAlive();

    m_takeDamageStrategy->takeDamage(*this, dmg);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << "Name: " << unit.getName() << std::endl;
    out << "Damage: " << unit.getDamageValue() << std::endl;
    out << "Hit Points: " << unit.getHitPoints() << std::endl;
    out << "Hit Points Limit: " << unit.getHitPointsLimit() << std::endl;
}
