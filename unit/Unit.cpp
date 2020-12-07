#include "Unit.h"

Unit::Unit(const std::string& name, int hp, int dmg) {
    this->state = new State(name, hp, dmg);
    this->action = new Action(this);
    this->observers = new std::map<int, Unit*>;
    this->quantityObs = 0;
}

Unit::~Unit() {
    delete this->state;
    delete this->action;
    delete this->observers;
}

void Unit::addObserver(Unit* newObserver) {
    this->quantityObs += 1;
    this->observers->insert(std::pair<int, Unit*>(this->quantityObs, newObserver));
}

void Unit::notifyObservers() {
    for (; this->quantityObs > 0; quantityObs--) {
        this->observers->find(this->quantityObs)->second->addHp(this->getHpLimit() / 10);
    }
}
        
int Unit::getHp() const {
    return this->state->getHp();
}

int Unit::getHpLimit() const {
    return this->state->getHpLimit();
}

int Unit::getDamage() const {
    return this->state->getDamage();
}

const std::string& Unit::getName() const {
    return this->state->getName();
}

State& Unit::getState() const {
    return *(this->state);
}

void Unit::ensureIsAlive() {
    this->state->ensureIsAlive();
}

void Unit::setState(State* state) {
    this->state = state;
}

void Unit::setAction(Action* action) {
    this->action = action;
}
        
void Unit::addHp(int hp) {
    this->state->addHp(hp);
}

void Unit::takeDamage(int dmg) {
    this->state->takeDamage(dmg);
    
    if ( this->state->getHp() == 0 ) {
        this->notifyObservers();
    }
}

void Unit::takeMagicDamage(int dmg) {
    this->state->takeMagicDamage(dmg);

    if ( this->state->getHp() == 0 ) {
        this->notifyObservers();
    }
}

void Unit::attack(Unit* enemy) {
    this->action->attack(enemy);
}

void Unit::counterAttack(Unit* enemy) {
    this->action->counterAttack(enemy);
}

void Unit::infect(Unit* enemy) {
    this->action->infect(enemy);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getState();
    
    return out;
}
