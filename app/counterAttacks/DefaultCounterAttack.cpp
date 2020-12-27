#include "DefaultCounterAttack.h"

DefaultCounterAttack::DefaultCounterAttack() {}

void DefaultCounterAttack::counterAttack(Unit& counterAttacker, Unit& enemy, Damage& attackDmg) {
    Damage* dmg = new Damage(attackDmg.getValue() / 2, attackDmg.getType());
    enemy.takeDamage(*dmg);

    delete dmg;
}