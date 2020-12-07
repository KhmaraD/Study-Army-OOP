#include "Berserker.h"

Berserker::Berserker(const std::string& name, int hp, int dmg)
    : Unit(name, hp, dmg) {
        this->action = new BerserkerAction(this);
    }

Berserker::~Berserker() {}

void Berserker::takeMagicDamage(int dmg) {
    this->ensureIsAlive();
}