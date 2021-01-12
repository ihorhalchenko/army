#include "../../Exceptions.h"
#include "../../states/DefaultState.h"
#include "Demon.h"
#include "Warlock.h"

Warlock::Warlock(const std::string& name) : Unit(name) {
    addUnitType(Unit::TYPE_WARLOCK);
    setState(new DefaultState(this));
}

Warlock::~Warlock() {}

Demon Warlock::callDemon() {
    if ( m_demons.size() >= WARLOCK_DEMONS_LIMIT ) {
        throw DemonsLimitIsReached();
    }

    Demon demon = Demon();
    demon.subscribe(this);
    m_demons.push_back(&demon);
    
    return demon;
}

void Warlock::update(Unit* unit) {
    std::set<Type> unitTypes = unit->getUnitType();
    if ( unitTypes.find(TYPE_DEMON) == unitTypes.end() ) {
        return;
    }

    Demon* demon = dynamic_cast<Demon*>(unit);
    if ( demon ) {
        m_demons.remove(demon);
    }
}
