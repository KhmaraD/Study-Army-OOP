#include "Rogue.h"

Rogue::Rogue(const std::string& name, int hp, int dmg)
    : Unit(name, hp, dmg) {
        this->action = new RogueAction(this);
    }

Rogue::~Rogue() {}
