#include "../../macros.h"
#include "../../units/Unit.h"
#include "../State.h"
#include "../../takeDamage/WolfTakeDamage.h"
#include "WolfState.h"

WolfState::WolfState(Unit* unit) : WerewolfState(unit) {
    setName(State::STATE_WEREWOLF_WOLF);

    if ( unit->getState()->getName() == State::STATE_WEREWOLF_HUMAN ) {
        unit->setHitPointsLimit(unit->getHitPointsLimit() * WOLF_MULTIPLICATOR);
        unit->setHitPoints(unit->getHitPoints() * WOLF_MULTIPLICATOR);
        unit->setDamageValue(unit->getDamageValue() * WOLF_MULTIPLICATOR);
    }
}

WolfState::~WolfState() {}

void WolfState::takeDamage(const Damage& dmg) {
    WolfTakeDamage wtd = WolfTakeDamage();
    wtd.takeDamage(*(getUnit()), dmg);
}
