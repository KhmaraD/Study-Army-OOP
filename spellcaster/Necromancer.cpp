#include "Necromancer.h"

Necromancer::Necromancer(const std::string& name, int hp, int dmg, int mana)
    : SpellCaster(name, hp, dmg, mana) {
        this->spellBook->addSpell("DeathSpike", new DeathSpike());
        this->magicAction = new MagicAction(this, this->spellBook->getSpell("DeathSpike"));
}

Necromancer::~Necromancer() {}

void Necromancer::observe(Unit* target) {
    target->addObserver(this);
}

void Necromancer::attack(Unit* enemy) {
    this->action->attack(enemy);
    this->observe(enemy);
}

void Necromancer::cast(Unit* target) {
    this->magicAction->cast(target);
    this->observe(target);
}