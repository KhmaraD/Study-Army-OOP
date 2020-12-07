#include <iostream>
#include "unit/Unit.h"
#include "unit/Soldier.h"
#include "unit/Rogue.h"
#include "unit/Berserker.h"
#include "unit/Vampire.h"
#include "unit/Werewolf.h"
#include "spellcaster/SpellCaster.h"
#include "spellcaster/Healer.h"
#include "spellcaster/Wizard.h"
#include "spellcaster/Priest.h"
#include "spellcaster/Warlock.h"
#include "unit/Demon.h"
#include "spellcaster/Necromancer.h"
#include "exceptions.h"
#include <string>



int main() {
    // Unit* vampire = new Vampire();
    Unit* soldier = new Soldier();
    Wizard* wizard = new Wizard();
    Necromancer* necromancer = new Necromancer();
    
    // std::cout << *vampire << std::endl;
    std::cout << *soldier << std::endl;
    std::cout << *wizard << std::endl;
    std::cout << *necromancer << std::endl;
    std::cout << "---------------" << std::endl;
    
    necromancer->cast(soldier);
    wizard->cast(soldier);
    
    // std::cout << *vampire << std::endl;
    std::cout << *soldier << std::endl;
    std::cout << *wizard << std::endl;
    std::cout << *necromancer << std::endl;
    std::cout << "---------------" << std::endl;
    
    wizard->cast(necromancer);
    wizard->attack(necromancer);
        
    // std::cout << *vampire << std::endl;
    std::cout << *soldier << std::endl;
    std::cout << *wizard << std::endl;
    std::cout << *necromancer << std::endl;
    std::cout << "---------------" << std::endl;
    
    wizard->cast(soldier);
    wizard->attack(soldier);
    wizard->attack(soldier);

    std::cout << *soldier << std::endl;
    std::cout << *wizard << std::endl;
    std::cout << *necromancer << std::endl;
    std::cout << "---------------" << std::endl;
    
// -------------------------------
    
    // warlock->summonDemon();
    // warlock->summon->attack(soldier);
    
// -------------------------------
    // Unit* soldier = new Soldier();
    // Unit* rogue = new Rogue();
    // Unit* berserker = new Berserker();
    // Unit* vampire = new Vampire();
    
    // std::cout << *soldier << std::endl;
    // std::cout << *rogue << std::endl;
    // std::cout << *berserker << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << "---------------" << std::endl;

    // soldier->attack(berserker);
    
    // std::cout << *soldier << std::endl;
    // std::cout << *rogue << std::endl;
    // std::cout << *berserker << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << "---------------" << std::endl;
    
    // berserker->attack(soldier);
    
    // std::cout << *soldier << std::endl;
    // std::cout << *rogue << std::endl;
    // std::cout << *berserker << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << "---------------" << std::endl;
    
    // rogue->attack(soldier);
    
    // std::cout << *soldier << std::endl;
    // std::cout << *rogue << std::endl;
    // std::cout << *berserker << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << "---------------" << std::endl;
    
    // soldier->attack(rogue);
    
    // std::cout << *soldier << std::endl;
    // std::cout << *rogue << std::endl;
    // std::cout << *berserker << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << "---------------" << std::endl;
    
    // ---------------------------------
    
    // // Unit* rogue = new Rogue();
    // // Unit* berserker = new Berserker();
    
    // // std::cout << *rogue << std::endl;
    // // std::cout << *berserker << std::endl;
    // // std::cout << "---------------" << std::endl;
    
    // // rogue->attack(berserker);
    
    // // std::cout << *rogue << std::endl;
    // // std::cout << *berserker << std::endl;
    // // std::cout << "---------------" << std::endl;
    
    // -----------------------------------
    
    // Unit* berserker = new Berserker();
    // Unit* vampire = new Vampire();
    
    // std::cout << *berserker << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << "---------------" << std::endl;
    
    // berserker->attack(vampire);
    
    // std::cout << *berserker << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << "---------------" << std::endl;
    
    // vampire->attack(berserker);
    
    // std::cout << *berserker << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << "---------------" << std::endl;
    
    // ---------------------------------------
    
    // Unit* berserker = new Berserker();
    // Unit* werewolf = new Werewolf();
    // Unit* vampire = new Vampire();
    
    // std::cout << *berserker << std::endl;
    // std::cout << *werewolf << std::endl;
    // std::cout << "---------------" << std::endl;
    
    // berserker->attack(werewolf);
    
    // std::cout << *berserker << std::endl;
    // std::cout << *werewolf << std::endl;
    // std::cout << "---------------" << std::endl;
    
    // werewolf->attack(berserker);
    
    // std::cout << *berserker << std::endl;
    // std::cout << *werewolf << std::endl;
    // std::cout << "---------------" << std::endl;
    
    // werewolf->attack(berserker);
    
    // std::cout << *berserker << std::endl;
    // std::cout << *werewolf << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << "---------------" << std::endl;
    
    // berserker->attack(werewolf);
    // werewolf->attack(berserker);
    // werewolf->attack(vampire);
    
    // std::cout << *berserker << std::endl;
    // std::cout << *werewolf << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << "---------------" << std::endl;
    
    // vampire->attack(werewolf);
    // berserker->attack(vampire);
    
    // std::cout << *berserker << std::endl;
    // std::cout << *werewolf << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << "---------------" << std::endl;
    
// -----------------------------------------------------------
    
    // Unit* werewolf = new Werewolf();
    // Unit* vampire = new Vampire();
    
    // std::cout << *werewolf << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << "---------------" << std::endl;
    
    // werewolf->attack(vampire);
    
    // std::cout << *werewolf << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << "---------------" << std::endl;
    
    // vampire->attack(werewolf);
    
    // std::cout << *werewolf << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << "---------------" << std::endl;
    
    // return 0;
}



    // std::cout << *soldier << std::endl; обьект
    // std::cout << soldier << std::endl; адрес обьекта