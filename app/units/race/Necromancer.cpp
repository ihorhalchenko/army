#include "../../states/DefaultState.h"
#include "Necromancer.h"

Necromancer::Necromancer(const std::string& name) : Spellcaster(name) {
    addUnitType(Unit::TYPE_UNDEAD);
    addUnitType(Unit::TYPE_NECROMANCER);
}

Necromancer::~Necromancer() {}

void Necromancer::attack(Unit& enemy) {
    if ( isDead() ) {
        return;
    }
    
    enemy.subscribe(this);
    getState()->attack(enemy, *(getDamage()));
}

void Necromancer::update(Unit* unit) {
    addHitPoints(unit->getHitPointsLimit() * NECROMANCER_MULTIPLICATOR);
}
