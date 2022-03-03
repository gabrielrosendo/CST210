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
    Horse harry("Harry", 1700, 4);
    Horse tom("Tom", 1600, 3.5);
    Horse alex("Alex", 1450, 3);
    stalls.push_back(harry);
    stalls.push_back(tom);
    stalls.push_back(alex);

    Chicken prissy("Prissy", 12, 1);
    Chicken lucille("Lucille", 14, 1);
    Chicken yetta("Yetta", 8, 1);
    Chicken louise("Louise", 9, 1);
    coop.push_back(prissy);
    coop.push_back(lucille);
    coop.push_back(yetta);
    coop.push_back(louise);

    Cow betsy("Betsy", 2200, 4);
    Cow dixie("Dixie", 2200, 4);
    pen.push_back(betsy);
    pen.push_back(dixie);
}

void Barn::feedCows()
{
    cout << "Feeding the cows" << endl;
    for (int i = 0; i < pen.size(); i++)
    {
        pen[i].eat();
        cout << "\n";
    }
}

void Barn::feedChickens()
{
    cout << "Feeding the chickens" << endl;
    for (int i = 0; i < coop.size(); i++)
    {
        coop[i].eat();
        cout << "\n";
    }
}

void Barn::feedHorses()
{
    cout << "Feeding the horses" << endl;
    for (int i = 0; i < stalls.size(); i++)
    {
        stalls[i].eat();
        cout << "\n";
    }
}
#endif