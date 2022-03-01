#include "Cow.h"
#include "Animal.h"

Cow::Cow()
{
    this->name = "";
    this->weight = 0;
    this->height = 0;
}

Cow::Cow(string str, double weight, double height)
{
    this->name = str;
    this->weight = weight;
    this->height = height;
}

void Cow::eat()
{
    cout << name << " the Chicken is eating" << endl;
    gainWeight();
}

void Cow::gainWeight()
{
    cout << name << " gained 6 pounds." << endl;
    int wei = getWeight();
    setWeight(wei);
    cout << name << " now weights " << getWeight() << endl;
}