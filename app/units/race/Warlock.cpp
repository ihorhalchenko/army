#include "../../Exceptions.h"
#include "../../states/WarlockState.h"
#include "Demon.h"
#include "Warlock.h"

Warlock::Warlock(const std::string& name) : Spellcaster(name) {
    addUnitType(Unit::TYPE_WARLOCK);
    setState(new WarlockState(this));
}

Warlock::~Warlock() {}

void Warlock::update(Unit* unit) {
    if ( unit->isUnitHasType(TYPE_DEMON) ) {
        Demon* demon = dynamic_cast<Demon*>(unit);
        if ( demon ) {
            removeDemon(demon);
        }
    }
}
