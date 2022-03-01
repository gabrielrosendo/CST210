#ifndef BARN_H
#define BARN_H

#include <iostream>
#include <vector>
#include "Animal.h"
#include "Chicken.h"
#include "Horse.h"
#include "Cow.h"

class Barn
{
private:
    vector<Chicken> coop;
    vector<Horse> stalls;
    vector<Cow> pen;
    int numAnimals;

public:
    Barn();
    void feedChickens();
    void feedHorses();
    void feedCows();
};

Barn::Barn()
{
    Horse a("A", 5, 6);
    stalls.push_back(a);
    Chicken b("B", 5, 7);
    coop.push_back(b);
    Cow c("c", 4, 9);
    pen.push_back(c);
}

void Barn::feedCows()
{
    for (int i = 0; i < pen.size(); i++)
    {
        pen[i].eat();
    }
}

void Barn::feedChickens()
{
    for (int i = 0; i < coop.size(); i++)
    {
        coop[i].eat();
    }
}

void Barn::feedHorses()
{
    for (int i = 0; i < stalls.size(); i++)
    {
        stalls[i].eat();
    }
}
#endif