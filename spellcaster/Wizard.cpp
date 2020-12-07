#include "Wizard.h"

Wizard::Wizard(const std::string& name, int hp, int dmg, int mana)
    : SpellCaster(name, hp, dmg, mana) {
        this->spellBook->addSpell("HydroBlast", new HydroBlast());
        this->spellBook->addSpell("FireBall", new FireBall());
        this->spellBook->addSpell("Heal", new Heal(20, 40));
        this->magicAction = new MagicAction(this, this->spellBook->getSpell("HydroBlast"));
}

Wizard::~Wizard() {}
