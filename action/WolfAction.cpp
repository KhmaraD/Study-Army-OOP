#include "WolfAction.h"

WolfAction::WolfAction(Unit* instance)
    : Action(instance) {}
    
WolfAction::~WolfAction() {}

void WolfAction::attack(Unit* enemy) {
    enemy->takeDamage(this->instance->getDamage());
    
    if (enemy->getHp() > 0 ) {
        enemy->counterAttack(this->instance);
        
        this->infect(enemy);
    }
}

void WolfAction::infect(Unit* enemy) {
    if ( enemy->getName() != "Vampire" && enemy->getName() != "Werewolf" && enemy->getName() != "Wolf") {
        enemy->setState(new State("Werewolf", 90, 30));
        enemy->setAction(new WerewolfAction(enemy));
    }
    // if ( strcmp("Vampire", enemy->getName()) && strcmp("Werewolf", enemy->getName()) && strcmp("Wolf", enemy->getName()) ) {
    //     enemy->setState(new State("Werewolf", 90, 30));
    //     enemy->setAction(new WerewolfAction(enemy));
    // }
}

void WolfAction::takeMagicDamage(int dmg) {
    instance->takeMagicDamage(dmg * 2);
}
