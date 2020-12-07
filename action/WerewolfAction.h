#ifndef WEREWOLFACTION_H
#define WEREWOLFACTION_H

#include "Action.h"
#include "../unit/Werewolf.h"

class WerewolfAction : public Action {
    public:
        WerewolfAction(Unit* instance);
        ~WerewolfAction();
        
        void transform(Unit* instance);
        
        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
        void takeMagicDamage(int dmg);
};

#endif // WEREWOLFACTION_H