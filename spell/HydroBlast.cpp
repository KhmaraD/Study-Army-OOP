#include "HydroBlast.h"

HydroBlast::HydroBlast(int actionPoints, int cost) : Spell(actionPoints, cost) {}

HydroBlast::~HydroBlast() {}

void HydroBlast::action(Unit* target) {
    target->takeMagicDamage(this->getActionPoints());
}
