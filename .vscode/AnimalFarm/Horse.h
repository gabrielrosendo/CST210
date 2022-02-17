#ifndef HORSE_H
#define HORSE_H

#include <iostream>
#include "Animal.h"

class Horse : public Animal {
    public:
        Horse(){}
        Horse(string, double, double);
        void eat();
        void gainWeight();
};

#endif