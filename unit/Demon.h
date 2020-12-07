#ifndef DEMON_H
#define DEMON_H

#include "Unit.h"

class Demon : public Unit {
    public:
        Demon(const std::string& name="Demon", int hp=150, int dmg=35);
        ~Demon();
};

#endif // DEMON_H
