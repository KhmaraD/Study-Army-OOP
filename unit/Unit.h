#ifndef UNIT_H
#define UNIT_H

#include <map>
#include <string>
#include "../interface/Observable.h"
#include "../state/State.h"
#include "../action/Action.h"
#include "../exceptions.h"

class Action;

class Unit {
    protected:
        State* state;
        Action* action;
        std::map<int, Unit*>* observers;
        int quantityObs;

    public:
        Unit(const std::string& name, int hp, int dmg);
        virtual ~Unit();
        
        void addObserver(Unit* newObserver);
        void notifyObservers();
        
        int getHp() const;
        int getHpLimit() const;
        int getDamage() const;
        const std::string& getName() const;
        State& getState() const;
        void ensureIsAlive();
        
        void setState(State* state);
        void setAction(Action* action);
        
        virtual void addHp(int hp);
        virtual void takeDamage(int dmg);
        virtual void takeMagicDamage(int dmg);
        
        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
        
        virtual void infect(Unit* enemy);
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif // UNIT_H
