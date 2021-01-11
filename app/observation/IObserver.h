#ifndef IOBSERVER_H
#define IOBSERVER_H

class Observable;

class IObserver {
    public:
        virtual ~IObserver();
        virtual void update(Observable* observable) = 0;
};

#endif //IOBSERVER_H