#include "Healer.h"

Healer::Healer(const std::string& name, int hp, int dmg, int mana)
    : SpellCaster(name, hp, dmg, mana) {
        this->spellBook->addSpell("Heal", new Heal());
        this->spellBook->addSpell("GreatHeal", new GreatHeal());
        this->spellBook->addSpell("FireBall", new FireBall(15, 30));
        this->magicAction = new MagicAction(this, this->spellBook->getSpell("Heal"));
}

Healer::~Healer() {}
