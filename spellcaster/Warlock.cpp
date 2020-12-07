#include "Warlock.h"

Warlock::Warlock(const std::string& name, int hp, int dmg, int mana)
    : SpellCaster(name, hp, dmg, mana) {
        this->spellBook->addSpell("FireBall", new FireBall());
        this->spellBook->addSpell("Heal", new Heal());
        this->magicAction = new MagicAction(this, this->spellBook->getSpell("FireBall"));
}

Warlock::~Warlock() {
    delete this->summon;
}

void Warlock::summonDemon() {
    this->spendMana(50);
    this->summon = new Demon();
}