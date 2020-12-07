#include "RogueAction.h"

RogueAction::RogueAction(Unit *instance)
    : Action(instance) {}

RogueAction::~RogueAction() {}

void RogueAction::attack(Unit* enemy) {
    enemy->takeDamage(this->instance->getDamage());
}
