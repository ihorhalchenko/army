#include "../../Exceptions.h"
#include "../../states/DefaultState.h"
#include "Demon.h"
#include "Warlock.h"

Warlock::Warlock(const std::string& name) : Unit(name) {
    addUnitType(Unit::TYPE_WARLOCK);
    setState(new DefaultState(this));
}

Warlock::~Warlock() {}

Demon* Warlock::callDemon() {
    if ( m_demons.size() >= WARLOCK_DEMONS_LIMIT ) {
        throw DemonsLimitIsReached();
    }

    Demon* demon = new Demon();
    demon->subscribe(this);
    m_demons.push_back(demon);
    
    return demon;
}

void Warlock::update(Observable* observable) {
    Demon* demon = dynamic_cast<Demon*>(observable);
    m_demons.remove(demon);
    delete demon;
}
