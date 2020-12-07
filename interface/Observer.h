#ifndef OBSERVER_H
#define OBSERVER_H

class Unit;

class Observer {
    public:
        virtual void observe(Unit* target) = 0;
};

#endif // OBSERVER_H