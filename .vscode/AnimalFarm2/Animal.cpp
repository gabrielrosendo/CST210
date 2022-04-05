#include "Animal.h"

Animal::Animal()
{
    this->name = "";
    this->weight = 0;
    this->height = 0;
}

Animal::Animal(string str, double weight, double height)
{
    this->name = str;
    this->weight = weight;
    this->height = height;
}

string Animal::getName() const
{
    return this->name;
}

string Animal::getSpecies(string str) {
    str.erase(0,1);
    return str;
}

double Animal::getWeight() const
{
    return this->weight;
}

double Animal::getHeight() const
{
    return this->height;
}

void Animal::setName(string str)
{
    this->name = str;
}

void Animal::setWeight(double dbl)
{
    this->weight = dbl;
}

void Animal::setHeight(double dble)
{
    this->height = dble;
}

void Animal::eat()
{
    cout << name << " is eating" << endl;
    gainWeight();
}

void Animal::gainWeight()
{
    cout << name << " gained 4 pounds" << endl;
    weight += 4;
    cout << name << " now weights " << weight << endl;
}

