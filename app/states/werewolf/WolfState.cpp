#include "WolfState.h"

WolfState::WolfState() {}

void WolfState::attack(Unit& attacker, Unit& enemy, Damage& dmg) {
    DefaultAttack da = DefaultAttack();
    da.attack(attacker, enemy, dmg);
}

void WolfState::counterAttack(Unit& counterAttacker, Unit& enemy, Damage& attackDmg) {
    DefaultCounterAttack dca = DefaultCounterAttack();
    dca.counterAttack(counterAttacker, enemy, attackDmg);
}

void WolfState::takeDamage(Unit& unit, Damage& dmg) {
    DefaultTakeDamage dtd = DefaultTakeDamage();
    dtd.takeDamage(unit, dmg);
}
