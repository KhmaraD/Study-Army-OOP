#ifndef SPELLBOOK_H
#define SPELLBOOK_H

#include <map>
#include <string>
#include "FireBall.h"
#include "HydroBlast.h"
#include "Heal.h"
#include "GreatHeal.h"
#include "MightOfHeaven.h"
#include "DeathSpike.h"

class SpellBook {
    private:
        std::map<const std::string, Spell*>* book;
    public:
        SpellBook();
        virtual ~SpellBook();

        virtual Spell* getSpell(const std::string spellName) const;
        void addSpell(const std::string spellName, Spell* spell);
        void removeSpell(const std::string spellName);
        void showSpellbook();
};



#endif // SPELLBOOK_H