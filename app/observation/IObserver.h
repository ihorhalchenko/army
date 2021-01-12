#ifndef IOBSERVER_H
#define IOBSERVER_H

class Unit;

class IObserver {
    public:
        virtual ~IObserver();
        virtual void update(Unit* unit) = 0;
};

#endif //IOBSERVER_H