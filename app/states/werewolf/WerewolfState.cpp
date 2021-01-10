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
    getUnit()->setState(new HumanState(unit));
}

void WerewolfState::transform(Unit* unit) {
    // TODO: Except Vampire
    unit->addUnitType(Unit::TYPE_WEREWOLF);
    unit->setState(new HumanState(unit));
}
