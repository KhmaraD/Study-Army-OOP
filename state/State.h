#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <string>
#include "../exceptions.h"

class State {
    protected:
        int hp;
        int hpLimit;
        int damage;
        std::string name;
        
    public:
        State(const std::string& name, int hp, int dmg);
        virtual ~State();
        
        void ensureIsAlive();
        int getHp() const;
        int getHpLimit() const;
        int getDamage() const;
        const std::string& getName() const;
        
        virtual void addHp(int hp);
        virtual void takeDamage(int dmg);
        virtual void takeMagicDamage(int dmg);
};

std::ostream& operator<<(std::ostream& out, const State& state);

#endif // STATE_H