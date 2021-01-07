#include "DefaultCounterAttack.h"

DefaultCounterAttack::DefaultCounterAttack() {}

void DefaultCounterAttack::counterAttack(Unit& counterAttacker, Unit& enemy, const Damage& attackDmg) {
    Damage dmg = Damage(attackDmg.getValue() / 2, attackDmg.getType());
    enemy.takeDamage(dmg);
}