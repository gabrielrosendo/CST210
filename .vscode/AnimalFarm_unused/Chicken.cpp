#include "Chicken.h"
#include "Animal.h"

Chicken::Chicken()
{
    this->name = "";
    this->weight = 0;
    this->height = 0;
}

Chicken::Chicken(string str, double weight, double height)
{
    this->name = str;
    this->weight = weight;
    this->height = height;
}

void Chicken::eat()
{
    Animal::eat();
}
