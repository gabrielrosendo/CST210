#ifndef HORSE_H
#define HORSE_H

#include <iostream>
#include "Animal.h"

class Horse : public Animal {
    public:
        Horse() : Animal () {}
        Horse(string name, double weight, double height) : Animal (name, weight, height) {}
        void eat();
        void gainWeight();
};

void Horse::eat() {
    cout << getName() << "the Horse is eating" << endl;
    gainWeight();
}

void Horse::gainWeight() {
    cout << getName() << " gained 4 pounds." << endl;
    weight += 4;
    cout << getName << " now weights " << getWeight() << endl;
}

#endif