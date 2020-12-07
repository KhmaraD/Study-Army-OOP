#ifndef HEALER_H
#define HEALER_H

#include "SpellCaster.h"
#include "../spell/Heal.h"
#include "../spell/GreatHeal.h"
#include "../spell/FireBall.h"

class Healer : public SpellCaster {
    public:
        Healer(const std::string& name="Healer", int hp=100, int dmg=10, int mana=150);
        virtual ~Healer();
};

#endif // HEALER_H
