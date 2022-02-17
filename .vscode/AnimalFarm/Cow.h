#ifndef COW_H
#define COW_H

#include <iostream>
#include "Animal.h"

class Cow : public Animal {
    public:
        Cow(){}
        Cow(string, double, double);
        void eat();
        void gainWeight();
};

#endif