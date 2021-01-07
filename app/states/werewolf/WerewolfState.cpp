#include "WerewolfState.h"

WerewolfState::WerewolfState() {}
WerewolfState::~WerewolfState() {}

void WerewolfState::turnIntoWolf() {
    m_unit->setState(new WolfState());
}

void WerewolfState::turnIntoHuman() {
    m_unit->setState(new HumanState());
}
