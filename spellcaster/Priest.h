#ifndef PRIEST_H
#define PRIEST_H

#include "SpellCaster.h"
#include "../spell/MightOfHeaven.h"
#include "../spell/Heal.h"
#include "../spell/GreatHeal.h"
#include "../spell/FireBall.h"


class Priest : public SpellCaster {
    public:
        Priest(const std::string& name="Priest", int hp=80, int dmg=15, int mana=160);
        virtual ~Priest();
};

#endif // PRIEST_H