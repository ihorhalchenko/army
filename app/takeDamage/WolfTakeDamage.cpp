#include "WolfTakeDamage.h"

WolfTakeDamage::WolfTakeDamage() {}

void WolfTakeDamage::takeDamage(Unit& unit, const Damage& dmg) {
    int dmgValue = dmg.getValue();

    if ( dmg.getType() == Damage::TYPE_MAGIC ) {
        dmgValue *= WOLF_MULTIPLICATOR;
    }
    unit.reduceHitPoints(dmgValue);
}