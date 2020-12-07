#include "MightOfHeaven.h"

MightOfHeaven::MightOfHeaven(int actionPoints, int cost) : Spell(actionPoints, cost) {}

MightOfHeaven::~MightOfHeaven() {}

void MightOfHeaven::action(Unit* target) {
    if ( target->getName() == "Vampire" || target->getName() == "Necromancer" ) {
        target->takeMagicDamage(this->getActionPoints()*2);
        return;
    }
    target->takeMagicDamage(this->getActionPoints());
}
