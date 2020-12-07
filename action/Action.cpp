#include "Action.h"

class Unit;

Action::Action(Unit* instance) {
    this->instance = instance;
}

Action::~Action() {}

void Action::attack(Unit* enemy) {
    enemy->takeDamage(this->instance->getDamage());
    
    if (enemy->getHp() > 0 ) {
        enemy->counterAttack(this->instance);
    }
}

void Action::counterAttack(Unit* enemy) {
    enemy->takeDamage(this->instance->getDamage()/2);
}

void Action::transform() {
    instance->ensureIsAlive();
}

void Action::infect(Unit* enemy) {
    enemy->ensureIsAlive();
}