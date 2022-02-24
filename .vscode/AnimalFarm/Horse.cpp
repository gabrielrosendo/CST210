#include "Horse.h"
#include "Animal.h"

Horse::Horse()
{
    this->name = "";
    this->weight = 0;
    this->height = 0;
}

Horse::Horse(string str, double weight, double height)
{
    this->name = str;
    this->weight = weight;
    this->height = height;
}

void Horse::eat()
{
    cout << name << " the Horse is eating" << endl;
    gainWeight();
}

void Horse::gainWeight()
{
    cout << name << " gained 4 pounds" << endl;
    weight += 4;
    cout << name << " now weights " << weight << endl;
}