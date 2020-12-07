#ifndef WOLFACTION_H
#define WOLFACTION_H

#include "Action.h"
#include "../unit/Werewolf.h"

class WolfAction : public Action {
    public:
        WolfAction(Unit* instance);
        ~WolfAction();
        
        virtual void attack(Unit* enemy);
        virtual void infect(Unit* enemy);
        void takeMagicDamage(int dmg);
};

#endif // WOLFACTION_H