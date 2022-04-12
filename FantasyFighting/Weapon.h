#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
private:
    std::string name;
    int power;
public:
    Weapon() {}
    Weapon(std::string, int);
    const std::string getName();
    int getPower();
    void setName(std::string);
};

int Weapon::getPower() {
    return this->power;
}

Weapon::Weapon(std::string str, int i)
{
    setName(str);
    this->power = i;
}


void Weapon::setName(std::string str)
{
    this->name = str;
}

const std::string Weapon::getName()
{
    return this->name;
}

#endif