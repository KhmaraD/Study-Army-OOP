#ifndef VAMPIREACTION_H
#define VAMPIREACTION_H

#include "Action.h"
#include "../unit/Vampire.h"

class VampireAction : public Action {
    public:
        VampireAction(Unit* instance);
        ~VampireAction();
    
        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
        virtual void infect(Unit* enemy);
        virtual void drain();
};

#endif // VAMPIREACTION_H