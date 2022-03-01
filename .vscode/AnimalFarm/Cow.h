#ifndef COW_H
#define COW_H

#include <iostream>
#include "Animal.h"

class Cow : public Animal {
    public:
        Cow() : Animal () {}
        Cow(string name, double weight, double height) : Animal (name, weight, height) {}
        void eat();
        void gainWeight();
};

void Cow::eat() {
    cout << getName() << "the Cow is eating" << endl;
    gainWeight();
}

void Cow::gainWeight() {
    cout << getName() << " gained 6 pounds." << endl;
    weight += 6;
    cout << getName() << " now weights " << getWeight() << endl;
}

#endif