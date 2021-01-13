#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <list>

class IObserver;
class Unit;

class Observable {
    private:
        std::set<IObserver*> m_observers;

    public:
        Observable();
        virtual ~Observable();
        virtual void subscribe(IObserver* observer);
        virtual void unsubscribe(IObserver* observer);
        virtual void notifySubscribers(Unit* unit);
};

#endif //OBSERVABLE_H