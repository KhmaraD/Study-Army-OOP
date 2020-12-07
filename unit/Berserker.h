#ifndef BERSERKER_H
#define BERSERKER_H

#include "Unit.h"
#include "../action/BerserkerAction.h"

class Berserker : public Unit {
    public:
        Berserker(const std::string& name="Berserker", int hp=100, int dmg=50);
        ~Berserker();
        
        void takeMagicDamage(int dmg);
};

#endif // BERSERKER_H