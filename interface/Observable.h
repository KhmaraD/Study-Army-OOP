#ifndef OBSERVABLE_H
#define OBSERVABLE_H

class Unit;

class Observable {
    public:
        virtual void addObserver(Unit* newObserver) = 0;
        virtual void notifyObservers() = 0;
};

#endif // OBSERVABLE_H