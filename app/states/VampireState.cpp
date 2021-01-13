#include "../attacks/VampireAttack.h"
#include "../counterAttacks/VampireCounterAttack.h"
#include "VampireState.h"

VampireState::VampireState(Unit* unit) : DefaultState(unit) {
    setName(State::STATE_VAMPIRE);
}

VampireState::~VampireState() {}

void VampireState::attack(Unit& enemy, const Damage& dmg) {
    VampireAttack va = VampireAttack();
    va.attack(*(getUnit()), enemy, dmg);
}

void VampireState::counterAttack(Unit& enemy, const Damage& attackDmg) {
    VampireCounterAttack vca = VampireCounterAttack();
    vca.counterAttack(*(getUnit()), enemy, attackDmg);
}
