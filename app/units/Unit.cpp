#include "Unit.h"

Unit::Unit(const std::string& name, int damageValue, int hitPoints, int hitPointsLimit) 
    : m_name(name), m_hitPoints(hitPoints), m_hitPointsLimit(hitPointsLimit) {
        m_damage = new Damage(damageValue, PHYSICAL_DAMAGE);
        m_unitTypes.insert(UNIT_TYPE_UNIT);
    }

Unit::~Unit() {
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

void Unit::setHitPoints(int hp) {
    m_hitPoints = hp;
}

void Unit::setHitPointsLimit(int hp) {
    m_hitPointsLimit = hp;
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

void Unit::addHitPoints(int hp) {
    this->ensureIsAlive();
    
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
    this->ensureIsAlive();

    if ( hp > m_hitPoints ) {
        m_hitPoints = 0;
        return;
    }
    m_hitPoints -= hp;
}

void Unit::attack(Unit& enemy) {
    this->ensureIsAlive();
    
    m_attackStrategy->attack(*this, enemy, *m_damage);
}

void Unit::counterAttack(Unit& enemy) {
    this->ensureIsAlive();

    m_counterAttackStrategy->counterAttack(*this, enemy, *m_damage);
}

void Unit::takeDamage(Damage& dmg) {
    this->ensureIsAlive();

    m_takeDamageStrategy->takeDamage(*this, dmg);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << "Damage: " << unit.getDamageValue() << std::endl;
    out << "Hit Points: " << unit.getHitPoints() << std::endl;
    out << "Hit Points Limit: " << unit.getHitPointsLimit() << std::endl;
}
