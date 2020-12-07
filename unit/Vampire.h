#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Unit.h"
#include "../action/VampireAction.h"

class Vampire: public Unit {
    public:
        Vampire(const std::string& name="Vampire", int hp=90, int dmg=30);
        ~Vampire();
};

#endif // VAMPIRE_H