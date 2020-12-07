#ifndef WARLOCK_H
#define WARLOCK_H

#include "SpellCaster.h"
#include "../unit/Demon.h"

class Warlock : public SpellCaster {
    public:
        Demon* summon;
        
        Warlock(const std::string& name="Warlock", int hp=120, int dmg=15, int mana=120);
        ~Warlock();
        
        void summonDemon();
};

#endif // WARLOCK_H