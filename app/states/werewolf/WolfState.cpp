#include "../../macros.h"
#include "../../units/Unit.h"
#include "../State.h"
#include "../../takeDamage/WolfTakeDamage.h"
#include "WolfState.h"

WolfState::WolfState(Unit* unit) : WerewolfState(unit) {
    unit->setHitPointsLimit(unit->getHitPointsLimit() * WOLF_MULTIPLICATOR);
    unit->setHitPoints(unit->getHitPoints() * WOLF_MULTIPLICATOR);
    unit->setDamageValue(unit->getDamageValue() * WOLF_MULTIPLICATOR);
}

WolfState::~WolfState() {}

void WolfState::takeDamage(const Damage& dmg) {
    WolfTakeDamage wtd = WolfTakeDamage();
    wtd.takeDamage(*(getUnit()), dmg);
}
