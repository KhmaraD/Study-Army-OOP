#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"
#include "../action/WerewolfAction.h"
#include "../action/WolfAction.h"

class Werewolf : public Unit {
    public:
        Werewolf(const std::string& name="Werewolf", int hp=90, int dmg=30);
        ~Werewolf();
        
        void takeMagicDamage(int dmg);
};

#endif // WEREWOLF_H