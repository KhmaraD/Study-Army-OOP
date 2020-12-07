#ifndef WIZARD_H
#define WIZARD_H

#include "SpellCaster.h"
#include "../spell/HydroBlast.h"
#include "../spell/FireBall.h"
#include "../spell/Heal.h"

class Wizard : public SpellCaster {
    public:
        Wizard(const std::string& name="Wizard", int hp=100, int dmg=10, int mana=150);
        virtual ~Wizard();
};

#endif // WIZARD_H
