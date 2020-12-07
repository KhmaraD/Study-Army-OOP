#include "VampireAction.h"

VampireAction::VampireAction(Unit* instance)
    : Action(instance) {}
    
VampireAction::~VampireAction() {}

void VampireAction::attack(Unit* enemy) {
    enemy->takeDamage(this->instance->getDamage());
    this->drain();
    
    if (enemy->getHp() > 0 ) {
        enemy->counterAttack(this->instance);
        
        this->infect(enemy);
    }
}

void VampireAction::counterAttack(Unit* enemy) {
    enemy->takeDamage(this->instance->getDamage()/2);
    
    this->drain();
}

void VampireAction::infect(Unit* enemy) {
    if ( enemy->getName() != "Vampire" && enemy->getName() != "Werewolf" && enemy->getName() != "Wolf" ) {
        enemy->setState(new State("Vampire", 90, 30));
        enemy->setAction(new VampireAction(enemy));
    }
    // if ( strcmp("Vampire", enemy->getName()) && strcmp("Werewolf", enemy->getName()) && strcmp("Wolf", enemy->getName()) ) {
    //     enemy->setState(new State("Vampire", 90, 30));
    //     enemy->setAction(new VampireAction(enemy));
    // }
}

void VampireAction::drain() {
    instance->addHp(this->instance->getDamage()/3);
}
