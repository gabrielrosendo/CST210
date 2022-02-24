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
    cout << name << " the Chicken is eating" << endl;
    gainWeight();
}

void Chicken::gainWeight()
{
    cout << name << " gained 0.25 pounds." << endl;
    weight += 0.25;
    cout << name << " now weights " << weight << endl;
}