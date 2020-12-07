#ifndef BERSERKERACTION_H
#define BERSERKERACTION_H

#include "Action.h"
#include "../unit/Berserker.h"

class BerserkerAction : public Action {
    public:
        BerserkerAction(Unit* instance);
        ~BerserkerAction();
        
        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
        void takeMagicDamage(int dmg);
};

#endif // BERSERKERACTION_H