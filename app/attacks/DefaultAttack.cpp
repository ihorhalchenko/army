#include "DefaultAttack.h"

DefaultAttack::DefaultAttack() {}

void DefaultAttack::attack(Unit& attacker, Unit& enemy, Damage* dmg) {
    enemy.takeDamage(dmg->getValue());
    enemy.counterAttack(attacker);
}