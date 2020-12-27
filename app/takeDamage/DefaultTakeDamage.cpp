#include "DefaultTakeDamage.h"

DefaultTakeDamage::DefaultTakeDamage() {}

void DefaultTakeDamage::takeDamage(Unit& unit, Damage& dmg) {
    unit.reduceHitPoints(dmg.getValue());
}