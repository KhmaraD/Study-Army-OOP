#include "BerserkerAction.h"

BerserkerAction::BerserkerAction(Unit* instance) : Action(instance) {}

BerserkerAction::~BerserkerAction() {}

void BerserkerAction::attack(Unit* enemy) {
    enemy->takeDamage(this->instance->getDamage());
    
    if (enemy->getHp() > 0 ) {
        enemy->counterAttack(this->instance);
    }
}

void BerserkerAction::counterAttack(Unit* enemy) {
    enemy->takeDamage(this->instance->getDamage()/2);
}

void BerserkerAction::takeMagicDamage(int dmg) {
    instance->ensureIsAlive();
}