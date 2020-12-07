#ifndef NECROMANCER_H
#define NECROMANCER_H

#include "SpellCaster.h"
#include "../interface/Observer.h"
#include "../spell/DeathSpike.h"

class Necromancer : public SpellCaster, public Observer {
    private:
        void observe(Unit* target);
    public:
        Necromancer(const std::string& name="Necromancer", int hp=120, int dmg=15, int mana=120);
        ~Necromancer();
        
        virtual void attack(Unit* enemy);
        virtual void cast(Unit* target);
        
};

#endif // NECROMANCER_H
