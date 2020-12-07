#include "SpellBook.h"

SpellBook::SpellBook() {
    this->book = new std::map <const std::string, Spell*>();
}

SpellBook::~SpellBook() {
    delete this->book;
}

Spell* SpellBook::getSpell(const std::string spellName) const {
    return this->book->find(spellName)->second;
}

void SpellBook::addSpell(const std::string spellName, Spell* spell) {
    this->book->insert(std::pair<const std::string, Spell*>(spellName, spell));
}

void SpellBook::removeSpell(const std::string spellName) {
    this->book->erase(spellName);
}

void SpellBook::showSpellbook() {
std::map<const std::string, Spell*>::iterator it;
    
    for ( it = this->book->begin(); it != this->book->end(); it++ ) {
        std::cout << it->first << std::endl;
    }
}
