#include "../../states/DefaultState.h"
#include "Necromancer.h"

Necromancer::Necromancer(const std::string& name) : Unit(name) {
    addUnitType(Unit::TYPE_NECROMANCER);
    setState(new DefaultState(this));
}

Necromancer::~Necromancer() {}

void Necromancer::attack(Unit& enemy) {
    ensureIsAlive();
    
    enemy.subscribe(this);
    getState()->attack(enemy, *(getDamage()));
}

void Necromancer::update(Unit* unit) {
    addHitPoints(unit->getHitPointsLimit() * NECROMANCER_MULTIPLICATOR);
}
