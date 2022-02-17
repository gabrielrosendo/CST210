#ifndef CHICKEN_H
#define CHICKEN_H

#include <iostream>
#include "Animal.h"

class Chicken : public Animal {
    public:
        Chicken(){}
        Chicken(string, double, double);
        void eat();
        void gainWeight();
};

#endif