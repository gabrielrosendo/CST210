#include "Animal.h"

Animal::Animal()
{
    this->name = "";
    this->weight = 0;
    this->height = 0;
}

Animal::Animal(string name, double weight, double height)
{
    this->name = name;
    this->weight = weight;
    this->height = height;
}

string Animal::getName() const
{
    return this->name;
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
    this->name = name;
}

void Animal::setWeight(double dbl)
{
    this->weight = dbl;
}

void Animal::setHeight(double dbl)
{
    this->height = dbl;
}

void Animal::eat()
{
}

void Animal::gainWeight()
{

}