#ifndef CHARACTER_H
#define CHARACTER_H

#include "Weapon.h"

class Character {
private:
    Weapon weapon;
    int hp;
    std::string name;
public:
	Character() {}
    int level;
    Character(std::string);
	~Character();
    void setName(std::string);
    std::string getName();
    void addWeapon(const Weapon&);
	int attack();
    void takeDamage(int);
    const void showHero();
    const void showVillain();
    const int getHp();
    void increaseHp(int);
};

Character::Character(std::string str)
{
    setName(str);
    this->hp = 100;
    this->level = 1;
}

Character::~Character()
{
    delete this;
}

void Character::increaseHp(int i) {
    hp += i;
}

const int Character::getHp() {
    return this->hp;
}

const void Character::showHero() {
    std::cout<<this->name << " is equipped with a " << this->weapon.getName() << " and currently has " << this->hp << " Health Points" << std::endl;
}

const void Character::showVillain() {
    std::cout<< this->name << "\n";
}

void Character::takeDamage(int i) {
    hp -= i;
}

int Character::attack() {
    return this->weapon.getPower();
}

void Character::addWeapon(const Weapon& wp) {
    this-> weapon = wp;
}

std::string Character::getName(){
    return this->name;
}

void Character::setName(std::string str) {
    this-> name = str;
}

#endif