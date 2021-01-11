#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <list>

class IObserver;

class Observable {
    private:
        std::list<IObserver*> m_observers;

    public:
        Observable();
        virtual ~Observable();
        virtual void subscribe(IObserver* observer);
        virtual void unsubscribe(IObserver* observer);
        virtual void notifySubscribers();
};

#endif //OBSERVABLE_H