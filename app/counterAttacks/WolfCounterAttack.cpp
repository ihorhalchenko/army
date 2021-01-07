#include "WolfCounterAttack.h"

WolfCounterAttack::WolfCounterAttack() {}

void WolfCounterAttack::counterAttack(Unit& counterAttacker, Unit& enemy, const Damage& attackDmg) {
    Damage dmg = Damage(attackDmg.getValue() / 2, attackDmg.getType());
    enemy.takeDamage(dmg);
}
