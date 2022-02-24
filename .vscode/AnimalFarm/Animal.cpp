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
}

void Animal::gainWeight()
{

}