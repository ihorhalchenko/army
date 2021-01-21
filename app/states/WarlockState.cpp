#include "../Exceptions.h"
#include "../observation/IObserver.h"
#include "../units/Unit.h"
#include "../units/race/Demon.h"
#include "WarlockState.h"

WarlockState::WarlockState(Unit* unit) : DefaultState(unit) {
    setName(State::STATE_WARLOCK);
}

WarlockState::~WarlockState() {}

Demon WarlockState::callDemon(const std::string& name) {
    Demon demon = Demon(name);
    Unit* unit = getUnit();
    IObserver* unitObserver = dynamic_cast<IObserver*>(unit);

    if ( unitObserver ) {
         demon.subscribe(unitObserver);
    } else {
        throw isNotObserver();
    }

    unit->addDemon(&demon);
   
    return demon;
}
