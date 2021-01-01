#include "HumanState.h"

HumanState::HumanState() {}

void HumanState::attack(Unit& attacker, Unit& enemy, Damage& dmg) {
    DefaultAttack da = DefaultAttack();
    da.attack(attacker, enemy, dmg);
}

void HumanState::counterAttack(Unit& counterAttacker, Unit& enemy, Damage& attackDmg) {
    DefaultCounterAttack dca = DefaultCounterAttack();
    dca.counterAttack(counterAttacker, enemy, attackDmg);
}

void HumanState::takeDamage(Unit& unit, Damage& dmg) {
    DefaultTakeDamage dtd = DefaultTakeDamage();
    dtd.takeDamage(unit, dmg);
}
