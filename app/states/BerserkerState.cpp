#include "../damage/Damage.h"
#include "../takeDamage/DefaultTakeDamage.h"
#include "BerserkerState.h"

BerserkerState::BerserkerState(Unit* unit) : DefaultState(unit) {}
BerserkerState::~BerserkerState() {}

void BerserkerState::takeDamage(const Damage& dmg) {
    if ( dmg.getType() == Damage::TYPE_MAGIC ) {
        return;
    }

    DefaultTakeDamage dtd = DefaultTakeDamage();
    dtd.takeDamage(*(getUnit()), dmg);
}
