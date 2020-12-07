#ifndef ROGUEACTION_H
#define ROGUEACTION_H

#include "Action.h"
#include "../unit/Unit.h"

class RogueAction : public Action {
    public:
        RogueAction(Unit* instance);
        ~RogueAction();
        
        virtual void attack(Unit* enemy);
};

#endif // ROGUEACTION_H