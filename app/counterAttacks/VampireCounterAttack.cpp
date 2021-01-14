#include "../units/Unit.h"
#include "../damage/Damage.h"
#include "VampireCounterAttack.h"

VampireCounterAttack::VampireCounterAttack() {}
VampireCounterAttack::~VampireCounterAttack() {}

void VampireCounterAttack::counterAttack(Unit& counterAttacker, Unit& enemy, const Damage& attackDmg) {
    int enemyHp = enemy.getHitPoints();
    int counterAttackDmg = attackDmg.getValue() * COUNTER_ATTACK_MULTIPLICATOR;
    int hpToTake = counterAttackDmg * VAMPIRE_MULTIPLICATOR;

    if ( enemyHp <  hpToTake) {
        hpToTake = enemyHp;
    }

    Damage dmg = Damage(counterAttackDmg, attackDmg.getType());
    counterAttacker.addHitPoints(hpToTake);
    enemy.takeDamage(dmg);
}