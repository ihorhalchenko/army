#include "WolfAttack.h"

WolfAttack::WolfAttack() {}

void WolfAttack::attack(Unit& attacker, Unit& enemy, Damage& dmg) {
    Damage damage = Damage(dmg.getValue() * 1.5, dmg.getType());
    enemy.takeDamage(damage);
    enemy.counterAttack(attacker);
}