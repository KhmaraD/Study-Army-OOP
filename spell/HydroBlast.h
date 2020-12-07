#ifndef HYDROBLAST_H
#define HYDROBLAST_H

#include "Spell.h"

class HydroBlast : public Spell {
    public:
        HydroBlast(int actionPoints=45, int cost=45);
        virtual ~HydroBlast();
        
        virtual void action(Unit* target);
};

#endif // HYDROBLAST_H