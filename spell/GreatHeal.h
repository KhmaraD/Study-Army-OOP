#ifndef GREATHEAL_H
#define GREATHEAL_H

#include "Spell.h"

class GreatHeal : public Spell {
    public:
        GreatHeal(int actionPoints=60, int cost=60);
        virtual ~GreatHeal();
        
        virtual void action(Unit* target);
};

#endif // GREATHEAL_H
