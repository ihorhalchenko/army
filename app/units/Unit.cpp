#include "../damage/Damage.h"
#include "../states/State.h"
#include "../states/DefaultState.h"
#include "../Exceptions.h"
#include "race/Demon.h"
#include "Unit.h"


Unit::Unit(const std::string& name, int damageValue, int hitPoints, int hitPointsLimit) 
    : m_name(name), 
    m_hitPoints(hitPoints), 
    m_hitPointsLimit(hitPointsLimit),
    m_damage(new Damage(damageValue, Damage::TYPE_PHYSICAL)),
    m_state(new DefaultState(this)) {
        m_unitTypes.insert(Unit::TYPE_UNIT);
    }

Unit::~Unit() {
    delete m_state;
    delete m_damage;
}

bool Unit::isDead() {
    if ( m_hitPoints <= 0 ) {
        std::cout << "Unit " << this->getName() << " is dead. \n" << std::endl;
        return true;
   }
   
   return false;
}

void Unit::setState(State* state) {
    if ( m_state) {
        delete m_state;
    }

    m_state = state;
}

void Unit::addUnitType(Unit::Type type) {
    m_unitTypes.insert(type);
}

void Unit::removeUnitType(Unit::Type type) {
    m_unitTypes.erase(type);
}

bool Unit::isUnitHasType(Type unitType) {
    if ( m_unitTypes.find(unitType) == m_unitTypes.end() ) {
        return false;
    }
    return true;
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
    if ( hp <= 0 ) {
        notifySubscribers(this);
        m_hitPoints = 0;
        return;
    }
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
    if ( isDead() ) {
        return;
    }
    
    if ( hp < 1 ) {
        return;
    }

    int result = m_hitPoints + hp;

    if ( result > m_hitPointsLimit ) {
        setHitPoints(m_hitPointsLimit);
        return;
    }
    setHitPoints(result);
}

void Unit::reduceHitPoints(int hp) {
    if ( isDead() ) {
        return;
    }

    if ( hp >= m_hitPoints ) {
        setHitPoints(0);
        return;
    }
    setHitPoints(m_hitPoints - hp);
}

void Unit::attack(Unit& enemy) {
    if ( isDead() ) {
        return;
    }
    
    m_state->attack(enemy, *m_damage);
}

void Unit::counterAttack(Unit& enemy) {
    if ( isDead() || enemy.isUnitHasType(TYPE_ROGUE) ) {
        return;
    }

    m_state->counterAttack(enemy, *m_damage);
}

void Unit::takeDamage(const Damage& dmg) {
    if ( isDead() ) {
        return;
    }

    m_state->takeDamage(dmg);
}

void Unit::turnIntoWolf() {
    if ( isDead() ) {
        return;
    }

    m_state->turnIntoWolf();
}

void Unit::turnIntoHuman() {
    if ( isDead() ) {
        return;
    }

    m_state->turnIntoHuman();
}

void Unit::transform(Unit& unit) {
    if ( isDead() || unit.isDead() ) {
        return;
    }

    m_state->transform(&unit);
}

Demon Unit::callDemon(const std::string& name) {
    if ( isDead() ) {
        throw UnitIsDead();
    }
    
    return m_state->callDemon(name);
}

void Unit::addDemon(Demon* demon) {
    if ( m_demons.size() >= WARLOCK_DEMONS_LIMIT ) {
        throw DemonsLimitIsReached();
    }
    
    m_demons.push_back(demon);
}

void Unit::removeDemon(Demon* demon) {
    m_demons.remove(demon);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << "Name: " << unit.getName() << std::endl;
    out << "Damage: " << unit.getDamage()->getValue() << std::endl;
    out << "Hit Points: " << unit.getHitPoints() << std::endl;
    out << "Hit Points Limit: " << unit.getHitPointsLimit() << std::endl;

    return out;
}
