#include "GreatHeal.h"

GreatHeal::GreatHeal(int actionPoints, int cost) : Spell(actionPoints, cost) {}

GreatHeal::~GreatHeal() {}

void GreatHeal::action(Unit* target) {
    target->addHp(this->getActionPoints());
}
