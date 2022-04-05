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
    Animal *myAnimals[15];
    int numAnimals;

public:
    Barn();
    ~Barn();
    void feedAnimals();
    void showAll();
    void outToPasture(int);
};

Barn::Barn()
{
    numAnimals = 0;
    // create objects of class horse
    myAnimals[numAnimals++] = new Horse("Harry", 1700, 4);
    myAnimals[numAnimals++] = new Horse("Tom", 1600, 3.5);
    myAnimals[numAnimals++] = new Horse("Alex", 1450, 3);

    // create objects of class chicken
    myAnimals[numAnimals++] = new Chicken("Prissy", 12, 1);
    myAnimals[numAnimals++] = new Chicken("Lucille", 7, 1);
    myAnimals[numAnimals++] = new Chicken("Yetta", 8, 1);
    myAnimals[numAnimals++] = new Chicken("Louise", 9, 1);

    // create objects of class cow
    myAnimals[numAnimals++] = new Cow("Betsy", 1500, 4);
    myAnimals[numAnimals++] = new Cow("Dixie", 1200, 4);
}

void Barn::feedAnimals()
{
    cout << "Feeding the animals" << endl;
    // loop through all animals
    for (int i = 0; i < numAnimals; i++)
    {
        myAnimals[i]->eat();
        if (myAnimals[i]->getTopWeight() < myAnimals[i]->getWeight())
        {
            outToPasture(i);
        }
        cout << "\n";
    }
}

void Barn::outToPasture(int i)
{
    // delete myAnimals[i];
    cout << myAnimals[i]->getName() << " the " << myAnimals[i]->getSpecies(typeid(*myAnimals[i]).name()) << " is out to pasture" << endl;
    if (myAnimals[i]->getSpecies(typeid(*myAnimals[i]).name()) == "Chicken")
    {
        cout << myAnimals[i]->getName() << " replaced with ";
        myAnimals[i] = new Chicken("Curry", 8, 1);
        cout << myAnimals[i]->getName() << endl;
    }
    else if (myAnimals[i]->getSpecies(typeid(*myAnimals[i]).name()) == "Cow")
    {
        cout << myAnimals[i]->getName() << " replaced with ";
        myAnimals[i] = new Cow("Annie", 1200, 4);
        cout << myAnimals[i]->getName() << endl;
    }
    else
    {
        cout << myAnimals[i]->getName() << " replaced with ";
        myAnimals[i] = new Horse("Clark", 1500, 4);
        cout << myAnimals[i]->getName() << endl;
    }
}

// desctructor for barn class
Barn::~Barn()
{
    for (int i = 0; i < numAnimals; i++)
    {
        delete myAnimals[i];
    }
}

void Barn::showAll()
{
        cout << "BARN CONTAINS: " << endl;
    for (int i = 0; i < numAnimals; i++)
    {
        cout << myAnimals[i]->getName() << " the " << myAnimals[i]->getSpecies(typeid(*myAnimals[i]).name()) << endl;
    }
    cout << "\n";
}

#endif