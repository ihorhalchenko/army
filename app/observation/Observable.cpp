#include "IObserver.h"
#include "../units/Unit.h"
#include "Observable.h"

Observable::Observable() {}
Observable::~Observable() {}

void Observable::subscribe(IObserver* observer) {
    m_observers.insert(observer);
}

void Observable::unsubscribe(IObserver* observer) {
    m_observers.erase(observer);
}

void Observable::notifySubscribers(Unit* unit) {
    for ( std::set<IObserver*>::iterator it = m_observers.begin(); it != m_observers.end(); ++it ) {
        (*it)->update(unit);
    }
}