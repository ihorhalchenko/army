#include "../../Exceptions.h"
#include "../../macros.h"
#include "../../units/Unit.h"
#include "../../damage/Damage.h"
#include "../State.h"
#include "HumanState.h"

HumanState::HumanState(Unit* unit) : WerewolfState(unit) {
    setName(State::STATE_WEREWOLF_HUMAN);

    if ( unit->getState()->getName() == State::STATE_WEREWOLF_WOLF ) {
        int hp = unit->getHitPoints() / WOLF_MULTIPLICATOR;

        unit->setHitPoints(hp);
        unit->setHitPointsLimit(unit->getHitPointsLimit() / WOLF_MULTIPLICATOR);
        unit->setDamageValue(unit->getDamage()->getValue() / WOLF_MULTIPLICATOR);
    }
}

HumanState::~HumanState() {}
