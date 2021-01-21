#include "../../states/NecromancerState.h"
#include "Necromancer.h"

Necromancer::Necromancer(const std::string& name) : Spellcaster(name) {
    addUnitType(Unit::TYPE_UNDEAD);
    addUnitType(Unit::TYPE_NECROMANCER);
    setState(new NecromancerState(this));
}

Necromancer::~Necromancer() {}

void Necromancer::update(Unit* unit) {
    addHitPoints(unit->getHitPointsLimit() * NECROMANCER_MULTIPLICATOR);
}
