#include "IObserver.h"
#include "../units/Unit.h"
#include "Observable.h"

Observable::Observable() {}
Observable::~Observable() {}

void Observable::subscribe(IObserver* observer) {
    m_observers.push_back(observer);
}

void Observable::unsubscribe(IObserver* observer) {
    m_observers.remove(observer);
}

void Observable::notifySubscribers(Unit* unit) {
    for ( std::list<IObserver*>::iterator it = m_observers.begin(); it != m_observers.end(); ++it ) {
        (*it)->update(unit);
    }
}