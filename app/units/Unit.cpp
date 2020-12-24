#include "Unit.h"

Unit::Unit(const std::string& name, int hp, int dmg, IAttack* attackStrategy) 
    : m_name(name), m_hitPoints(hp), m_hitPointsLimit(hp), m_damage(dmg), m_attackStrategy(attackStrategy) {}

Unit::~Unit() {
    delete m_attackStrategy;
}

void Unit::ensureIsAlive() {
    if ( m_hitPoints == 0 ) {
       throw UnitIsDead();
   }
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
    
    if ( m_hitPoints + hp > m_hitPointsLimit ) {
        hp = m_hitPointsLimit - m_hitPoints;
    }
    m_hitPoints += hp;
}

void Unit::takeDamage(int dmg) {
    this->ensureIsAlive();
    
    if ( m_hitPoints - dmg < 1 ) {
        throw UnitIsDead();
    }
    m_hitPoints -= dmg;
}

void Unit::attack(Unit& enemy) {
    this->ensureIsAlive();

    PhysicalDamage* physicalDmg = new PhysicalDamage(m_damage);
    m_attackStrategy->attack(*this, enemy, physicalDmg);
}

void Unit::attack(Unit& enemy, BattleSpell& bs) {
    this->ensureIsAlive();

    MagicDamage* magicDmg = new MagicDamage(bs.getValue());
    m_attackStrategy->attack(*this, enemy, magicDmg);
}

void Unit::counterAttack(Unit& enemy) {
    this->ensureIsAlive();

    PhysicalDamage physicalDmg = new PhysicalDamage(m_damage/2);
    enemy.takeDamage();
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << "Name: " << unit.getName() << std::endl;
    out << "Damage: " << unit.getDamage() << std::endl;
    out << "Hit Points: " << unit.getHitPoints() << std::endl;
    out << "Hit Points Limit: " << unit.getHitPointsLimit() << std::endl;
}
