#include "../units/Unit.h"
#include "../damage/Damage.h"
#include "DefaultTakeDamage.h"

DefaultTakeDamage::DefaultTakeDamage() {}
DefaultTakeDamage::~DefaultTakeDamage() {}

void DefaultTakeDamage::takeDamage(Unit& unit, const Damage& dmg) {
    unit.reduceHitPoints(dmg.getValue());
}