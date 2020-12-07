#include "Priest.h"

Priest::Priest(const std::string& name, int hp, int dmg, int mana)
    : SpellCaster(name, hp, dmg, mana) {
        this->spellBook->addSpell("MightOfHeaven", new MightOfHeaven());
        this->spellBook->addSpell("Heal", new Heal());
        this->spellBook->addSpell("GreatHeal", new GreatHeal());
        this->spellBook->addSpell("FireBall", new FireBall(15, 30));
        this->magicAction = new MagicAction(this, this->spellBook->getSpell("MightOfHeaven"));
}

Priest::~Priest() {}
