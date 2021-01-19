#include "../../Exceptions.h"
#include "../../states/DefaultState.h"
#include "Demon.h"
#include "Warlock.h"

Warlock::Warlock(const std::string& name) : Spellcaster(name) {
    addUnitType(Unit::TYPE_WARLOCK);
}

Warlock::~Warlock() {}

Demon Warlock::callDemon(const std::string& name) {
    if ( m_demons.size() >= WARLOCK_DEMONS_LIMIT ) {
        throw DemonsLimitIsReached();
    }

    Demon demon = Demon(name);
    demon.subscribe(this);
    m_demons.push_back(&demon);
    
    return demon;
}

void Warlock::update(Unit* unit) {
    if ( unit->isUnitHasType(TYPE_DEMON) ) {
        Demon* demon = dynamic_cast<Demon*>(unit);
        if ( demon ) {
            m_demons.remove(demon);
        }
    }
}
