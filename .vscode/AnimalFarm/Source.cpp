#include "Animal.cpp"
#include "Horse.h"
#include "Chicken.h"
#include "Cow.h"
#include "Barn.h"

int main()
{
    // create object of the barn class
    Barn b;
    b.showAll();
    // feed animals
    b.feedAnimals();

    return 0;
}