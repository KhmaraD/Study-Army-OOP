#include "Vampire.h"

Vampire::Vampire(const std::string& name, int hp, int dmg)
    : Unit(name, hp, dmg) {
        this->action = new VampireAction(this);
    }
    
Vampire::~Vampire() {}
