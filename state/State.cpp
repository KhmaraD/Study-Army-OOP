#include "State.h"

State::State(const std::string& name, int hp, int dmg) {
    this->hp = hp;
    this->hpLimit = hp;
    this->damage = dmg;
    this->name = name;
}

State::~State() {}

void State::ensureIsAlive() {
    if ( this->hp == 0 ) {
       throw OutOfHPException();
   }
}

int State::getHp() const {
    return this->hp;
}

int State::getHpLimit() const {
    return this->hpLimit;
}

int State::getDamage() const {
    return this->damage;
}

const std::string& State::getName() const {
    return this->name;
}
        
void State::addHp(int hp) {
    this->ensureIsAlive();
    
    this->hp += hp;
    
    if ( this->hp > this->hpLimit ) {
        this->hp = this->hpLimit;
    }
}

void State::takeDamage(int dmg) {
    this->ensureIsAlive();
    
    this->hp -= dmg;
    
    if ( this->hp <= 0 ) {
        this->hp = 0;
        std::cout << "The " << this->getName() << " is dead!" << std::endl;
    }
}

void State::takeMagicDamage(int dmg) {
    this->ensureIsAlive();
    
    this->hp -= dmg;
    
    if ( this->hp <= 0 ) {
        this->hp = 0;
        std::cout << "The " << this->getName() << " is dead!" << std::endl;
    }
}
        
std::ostream& operator<<(std::ostream& out, const State& state) {
    std::cout << "Unit [hp:" << state.getHp() << '/' << state.getHpLimit();
    std::cout << ", dmg:" << state.getDamage();
    std::cout << ", name: " << state.getName() << ']';

    return out;
}
