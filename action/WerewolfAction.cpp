#include "WerewolfAction.h"

WerewolfAction::WerewolfAction(Unit* instance)
    : Action(instance) {}
    
WerewolfAction::~WerewolfAction() {}

void WerewolfAction::transform(Unit* instance) {
    instance->setState(new State("Wolf", 120, 40));
    instance->setAction(new WolfAction(instance));
}

void WerewolfAction::attack(Unit* enemy) {
    enemy->takeDamage(this->instance->getDamage());
    
    if (enemy->getHp() > 0 ) {
        enemy->counterAttack(this->instance);
    }
    
    if (this->instance->getHp() <= this->instance->getHpLimit()/2) {
        this->transform(instance);
    }
}

void WerewolfAction::counterAttack(Unit* enemy) {
    enemy->takeDamage(instance->getDamage()/2);
}

void WerewolfAction::takeMagicDamage(int dmg) {
    instance->takeMagicDamage(dmg);
}
