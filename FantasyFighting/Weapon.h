#ifndef WEAPON_H
#define WEAPON_H

#include "Character.h"
#include <iostream>


class Weapon
{
private:
    std::string name;
    int power;
    int cost;
public:
    Weapon() {}
    // constructor for character weapon
    Weapon(std::string str, int p, int c){
        setName(str);
        this->power=p;
        this->cost=c;
    }
    // constructor for villlain weapon
    Weapon(std::string str, int i){  
    setName(str);
    this->power = i;
    }
    const std::string getName();
    int getPower();
    int getCost();
    void setName(std::string);
};


int Weapon::getPower() {
    return this->power;
}

int Weapon::getCost(){
    return this->cost;
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