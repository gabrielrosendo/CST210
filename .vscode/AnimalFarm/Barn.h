#ifndef BARN_H
#define BARN_H

#include <iostream>
#include "Animal.h"
#include "Chicken.h"
#include "Horse.h"
#include "Cow.h"

class Barn {
    private:
        vector <Chicken> coop();
        vector <Horse> stalls();
        vector <Cow> pen();
    public:
        Barn();
        void feedChickens();
        void feedHorses();
        void feedCows();    
};


#endif