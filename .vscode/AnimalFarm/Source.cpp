#include "Animal.cpp"
#include "Horse.h"
#include "Chicken.h"
#include "Cow.h"
#include "Barn.h"

int main()
{
    Barn b;
    b.feedCows();
    b.feedChickens();
    b.feedHorses();

    return 0;
}