#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include <string>
#include "../unit/Unit.h"
#include "../action/MagicAction.h"
#include "../state/MagicState.h"
#include "../spell/Spell.h"
#include "../spell/SpellBook.h"

class MagicAction;

class SpellCaster : public Unit {
    protected:
        MagicState* magicState;
        MagicAction* magicAction;
        SpellBook* spellBook;
        
    public:
        SpellCaster(const std::string& name, int hp, int dmg, int mana);
        virtual ~SpellCaster();
        
        int getMana() const;
        int getManaLimit() const;
        // MagicState& getMagicState() const; //-------------------------?
        
        void addMana(int extra);
        void spendMana(int cost);
        
        virtual void addSpell(const std::string& spellName, Spell* spell);
        virtual void changeSpell(const std::string& spellName);
        virtual void showSpellbook();
        virtual void cast(Unit* target);
};

std::ostream& operator<<(std::ostream& out, const SpellCaster& spellCaster);

#endif // SPELLCASTER_H
