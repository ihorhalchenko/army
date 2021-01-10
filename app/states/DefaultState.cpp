#include "../attacks/DefaultAttack.h"
#include "../takeDamage/DefaultTakeDamage.h"
#include "../counterAttacks/DefaultCounterAttack.h"
#include "DefaultState.h"

DefaultState::DefaultState(Unit* unit) : State(unit) {
    setName(State::STATE_DEFAULT);
}

DefaultState::~DefaultState() {}

void DefaultState::attack(Unit& enemy, const Damage& dmg) {
    DefaultAttack da = DefaultAttack();
    da.attack(*(getUnit()), enemy, dmg);
}

void DefaultState::counterAttack(Unit& enemy, const Damage& attackDmg) {
    DefaultCounterAttack dca = DefaultCounterAttack();
    dca.counterAttack(*(getUnit()), enemy, attackDmg);
}

void DefaultState::takeDamage(const Damage& dmg) {
    DefaultTakeDamage dtd = DefaultTakeDamage();
    dtd.takeDamage(*(getUnit()), dmg);
}