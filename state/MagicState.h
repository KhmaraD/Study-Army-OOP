#ifndef MAGICSTATE_H
#define MAGICSTATE_H

#include <iostream>
#include "../exceptions.h"

class MagicState {
    protected:
        int mana;
        int manaLimit;
        
    public:
        MagicState(int mana);
        virtual ~MagicState();
        
        int getMana() const;
        int getManaLimit() const;
        
        void addMana(int extra);
        void spendMana(int cost);
        
        // std::ostream& operator<<(std::ostream& out, const MagicState& state);

};

#endif // MAGICSTATE_H