#include "Unit.h"

Unit::Unit(const std::string& name) : m_name(name), m_damage(20), m_hitPoints(100), m_hitPointsLimit(100) {}

Unit::~Unit() {
    delete m_attackStrategy;
    delete m_takeDamageStrategy;
    delete m_counterAttackStrategy;
}

void Unit::ensureIsAlive() {
    if ( m_hitPoints == 0 ) {
       throw UnitIsDead();
   }
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

int Unit::getDamage() const {
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

void Unit::takeDamage(Damage& dmg) {
    this->ensureIsAlive();

    m_takeDamageStrategy->takeDamage(*this, dmg);
}

void Unit::attack(Unit& enemy) {
    this->ensureIsAlive();
    
    Damage* dmg = new Damage(m_damage, PHYSICAL_DAMAGE);
    m_attackStrategy->attack(*this, enemy, *dmg);

    delete dmg;
}

void Unit::counterAttack(Unit& enemy) {
    this->ensureIsAlive();

    Damage* dmg = new Damage(m_damage, PHYSICAL_DAMAGE);
    m_counterAttackStrategy->counterAttack(*this, enemy, *dmg);

    delete dmg;
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << "Damage: " << unit.getDamage() << std::endl;
    out << "Hit Points: " << unit.getHitPoints() << std::endl;
    out << "Hit Points Limit: " << unit.getHitPointsLimit() << std::endl;
}
