#ifndef MIGHTOFHEAVEN_H
#define MIGHTOFHEAVEN_H

#include "Spell.h"

class MightOfHeaven : public Spell {
    public:
        MightOfHeaven(int actionPoints=45, int cost=45);
        virtual ~MightOfHeaven();
        
        virtual void action(Unit* target);
};

#endif // MIGHTOFHEAVEN_H
