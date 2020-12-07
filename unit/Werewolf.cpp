#include "Werewolf.h"

Werewolf::Werewolf(const std::string& name, int hp, int dmg)
    : Unit(name, hp, dmg) {
        this->action = new WerewolfAction(this);
    }
    
Werewolf::~Werewolf() {}

void Werewolf::takeMagicDamage(int dmg) {
    this->takeMagicDamage(dmg);
}
