#ifndef CHARACTER_H
#define CHARACTER_H

#include "Weapon.h"
#include "Creature.h"

class Character : public Creature
{
private:
    Weapon weapon;
    int hp;
    std::string name;
public:
    int level;
    int gold;
    Character() {}
    Character(std::string);
    void setName(std::string);
    std::string getName();
    std::string getWeapon();
    const int getHp();
    void setHp(int);
    void create();
    void increaseHp(int);
    void takeDamage(int);
    const void showHero();    
    void addWeapon(const Weapon &);
    int attack();
};

Character::Character(std::string str)
{
    // create character
    setName(str);
    this->gold = 50;
    this->hp = 100;
    this->level = 1;
    create();
}

void Character::create() {
    std::cout<<"LOADING..."<<std::endl;
}

std::string Character::getWeapon()
{
    return weapon.getName();
}

void Character::setHp(int i)
{
    this->hp = i;
}
void Character::increaseHp(int i)
{
    hp += i;
}

const int Character::getHp()
{
    return this->hp;
}

const void Character::showHero()
{
    std::cout << "HERO: " << this->name << std::endl;
    std::cout << "GUN: " << this->weapon.getName() << std::endl;
    std::cout << this->hp << " HEALTH POINTS" << std::endl;
    std::cout << this->gold << " GOLD" << std::endl;
}

void Character::takeDamage(int i)
{
    hp -= i;
}

int Character::attack()
{
    return this->weapon.getPower();
}

void Character::addWeapon(const Weapon &wp)
{
    this->weapon = wp;
}

std::string Character::getName()
{
    return this->name;
}

void Character::setName(std::string str)
{
    this->name = str;
}

#endif