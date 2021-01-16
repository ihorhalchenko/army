#include "../Exceptions.h"
#include "../units/Unit.h"
#include "../attacks/PriestAttack.h"
#include "../counterAttacks/PriestCounterAttack.h"
#include "PriestState.h"

PriestState::PriestState(Unit* unit) : DefaultState(unit) {
    setName(State::STATE_PRIEST);
}

PriestState::~PriestState() {}

void PriestState::attack(Unit& enemy, const Damage& dmg) {
    PriestAttack pa = PriestAttack();
    pa.attack(*(getUnit()), enemy, dmg);
}

void PriestState::counterAttack(Unit& enemy, const Damage& attackDmg) {
    PriestCounterAttack pca = PriestCounterAttack();
    pca.counterAttack(*(getUnit()), enemy, attackDmg);
}
