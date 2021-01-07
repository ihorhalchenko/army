#include "WolfTakeDamage.h"

WolfTakeDamage::WolfTakeDamage() {}

void WolfTakeDamage::takeDamage(Unit& unit, const Damage& dmg) {
    int dmgValue = dmg.getValue();

    if ( dmg.getType() == MAGIC_DAMAGE ) {
        dmgValue *= WOLF_MULTIPLICATOR;
    }
    unit.reduceHitPoints(dmgValue);
}