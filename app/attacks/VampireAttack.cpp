#include "../units/Unit.h"
#include "../damage/Damage.h"
#include "VampireAttack.h"

VampireAttack::VampireAttack() {}
VampireAttack::~VampireAttack() {}

void VampireAttack::attack(Unit& attacker, Unit& enemy, const Damage& dmg) {
    int enemyHp = enemy.getHitPoints();
    int hpToTake = dmg.getValue() * VAMPIRE_MULTIPLICATOR;

    if ( enemyHp <  hpToTake) {
        hpToTake = enemyHp;
    }

    enemy.takeDamage(dmg);
    attacker.addHitPoints(hpToTake);
    enemy.counterAttack(attacker);
}