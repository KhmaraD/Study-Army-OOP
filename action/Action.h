#ifndef ACTION_H
#define ACTION_H

#include "../unit/Unit.h"
#include <cstring>

class Unit;

class Action {
    protected:
        Unit* instance;
        
    public:
        Action(Unit* instance);
        virtual ~Action();
        
        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
        
        virtual void transform();
        virtual void infect(Unit* enemy);
};

#endif // ACTION_H