#include "MagicAction.h"

MagicAction::MagicAction(SpellCaster* owner, Spell* spell) {
    this->owner = owner;
    this->spell = spell;
}

MagicAction::~MagicAction() {
    delete this->spell;
}

void MagicAction::changeSpell(Spell* newSpell) {
    delete this->spell;
    this->spell = newSpell;
}

void MagicAction::cast(Unit* enemy) {
    this->owner->ensureIsAlive();
    this->owner->spendMana(this->spell->getCost());
    this->spell->action(enemy);
}
