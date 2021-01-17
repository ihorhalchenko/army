#include "../../Exceptions.h"
#include "../../units/Unit.h"
#include "../State.h"
#include "HumanState.h"
#include "WolfState.h"
#include "WerewolfState.h"

WerewolfState::WerewolfState(Unit* unit) : DefaultState(unit) {}
WerewolfState::~WerewolfState() {}

void WerewolfState::turnIntoWolf() {
    Unit* unit = getUnit();
    unit->setState(new WolfState(unit));
}

void WerewolfState::turnIntoHuman() {
    Unit* unit = getUnit();
    unit->setState(new HumanState(unit));
}

void WerewolfState::transform(Unit* unit) {
    if ( unit->isUnitHasType(Unit::TYPE_VAMPIRE) ) {
        throw ForbiddenTransformation();
    }

    unit->addUnitType(Unit::TYPE_WEREWOLF);
    unit->setState(new HumanState(unit));
}
