#include "DefaultTakeDamage.h"

DefaultTakeDamage::DefaultTakeDamage() {}

void DefaultTakeDamage::takeDamage(Unit& unit, const Damage& dmg) {
    unit.reduceHitPoints(dmg.getValue());
}