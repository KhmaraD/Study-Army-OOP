#ifndef DEATHSPIKE_H
#define DEATHSPIKE_H

#include "Spell.h"

class DeathSpike : public Spell {
    public:
        DeathSpike(int actionPoints=45, int cost=45);
        virtual ~DeathSpike();
        
        virtual void action(Unit* target);
};

#endif // DEATHSPIKE_H