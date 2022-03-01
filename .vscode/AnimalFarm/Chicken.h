#ifndef CHICKEN_H
#define CHICKEN_H

#include <iostream>
#include "Animal.h"

class Chicken : public Animal {
    public:
        Chicken() : Animal () {}
        Chicken(string name, double weight, double height) : Animal (name, weight, height) {}
        void eat();
        void gainWeight();
};

void Chicken::eat() {
    cout << getName() << "the Chicken is eating" << endl;
    gainWeight();
}

void Chicken::gainWeight() {
    cout << getName() << " gained 0.25 pounds." << endl;
    weight += 0.25;
    cout << getName << " now weights " << getWeight() << endl;
}

#endif