#include "WolfAttack.h"

WolfAttack::WolfAttack() {}

void WolfAttack::attack(Unit& attacker, Unit& enemy, const Damage& dmg) {
    enemy.takeDamage(dmg);
    enemy.counterAttack(attacker);
}