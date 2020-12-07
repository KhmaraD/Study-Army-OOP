#include "SpellCaster.h"

SpellCaster::SpellCaster(const std::string& name, int hp, int dmg, int mana)
    : Unit(name, hp, dmg) {
        this->magicState = new MagicState(mana);
        this->action = new Action(this);
        this->spellBook = new SpellBook();
    }

SpellCaster::~SpellCaster() {
    delete this->magicState;
    delete this->magicAction;
    delete this->spellBook;
}

int SpellCaster::getMana() const {
    return this->magicState->getMana();
}

int SpellCaster::getManaLimit() const {
    return this->magicState->getManaLimit();
}

void SpellCaster::addMana(int extra) {
    this->state->ensureIsAlive();
    this->magicState->addMana(extra);
}

void SpellCaster::spendMana(int cost) {
    this->state->ensureIsAlive();
    this->magicState->spendMana(cost);
}

void SpellCaster::addSpell(const std::string& spellName, Spell* spell) {
    this->spellBook->addSpell(spellName, spell);
}

void SpellCaster::changeSpell(const std::string& spellName) {
    this->magicAction->changeSpell(this->spellBook->getSpell(spellName));
}

void SpellCaster::showSpellbook() {
    std::cout << '[' << this->getName() << ']' << " spell book:" << std::endl;
    this->spellBook->showSpellbook();
}

void SpellCaster::cast(Unit* target) {
    this->magicAction->cast(target);
}

std::ostream& operator<<(std::ostream& out, const SpellCaster& spellCaster) {
    std::cout << "Unit [hp:" << spellCaster.getHp() << '/' << spellCaster.getHpLimit();
    std::cout << ", dmg:" << spellCaster.getDamage();
    std::cout << ", mana:" << spellCaster.getMana() << '/' << spellCaster.getManaLimit();
    std::cout << ", name: " << spellCaster.getName() << ']';
    
    return out;
}
