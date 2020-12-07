#ifndef ROGUE_H
#define ROGUE_H

#include "Unit.h"
#include "../action/RogueAction.h"

class Rogue: public Unit {
    public:
        Rogue(const std::string& name="Rogue", int hp=120, int dmg=40);
        ~Rogue();
};

#endif // ROGUE_H