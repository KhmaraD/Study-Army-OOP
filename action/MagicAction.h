#ifndef MAGICACTION_H
#define MAGICACTION_H

#include "../spell/Spell.h"
#include "../spellcaster/SpellCaster.h"

class SpellCaster;

class MagicAction {
    protected:
        SpellCaster* owner;
        Spell* spell;
        
    public:
        MagicAction(SpellCaster* owner, Spell* spell);
        virtual ~MagicAction();
        
        void changeSpell(Spell* newSpell);
        virtual void cast(Unit* enemy);
};

#endif // MAGICACTION_H
