#include "DeathSpike.h"

DeathSpike::DeathSpike(int actionPoints, int cost) : Spell(actionPoints, cost) {}
    
DeathSpike::~DeathSpike() {}

void DeathSpike::action(Unit* target) {
    target->takeMagicDamage(this->getActionPoints());
}