#ifndef VILLAIN_H
#define VILLAIN_H

#include "Weapon.h"
#include "Creature.h"

class Villain : public Creature
{
private:
    Weapon weapon;
    int hp;
    std::string name;

public:
    Villain() {}
    Villain(std::string);
    void addWeaponVl(const Weapon &);
    void create();
    const int getHpVl();
    std::string getWeaponVl();
    std::string getNameVl();
    int attack();
    const void showVillain();
};

Villain::Villain(std::string str)
{
    this->name = str;
    this->hp = 100;
    create();
}

void Villain::create()
{
    std::cout << "Villain generated" << std::endl;
}

void Villain::addWeaponVl(const Weapon &wp)
{
    this->weapon = wp;
}

const void Villain::showVillain()
{
    std::cout << this->name << "\n";
}

const int Villain::getHpVl()
{
    return this->hp;
}

std::string Villain::getNameVl()
{
    return this->name;
}

std::string Villain::getWeaponVl()
{
    return weapon.getName();
}

int Villain::attack()
{
    return this->weapon.getPower();
}

#endif