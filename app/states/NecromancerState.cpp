#include "../units/Unit.h"
#include "../attacks/NecromancerAttack.h"
#include "NecromancerState.h"

NecromancerState::NecromancerState(Unit* unit) : DefaultState(unit) {
    setName(State::STATE_NECROMANCER);
}

NecromancerState::~NecromancerState() {}

void NecromancerState::attack(Unit& enemy, const Damage& dmg) {
    NecromancerAttack na = NecromancerAttack();
    na.attack(*(getUnit()), enemy, dmg);
}
