#include "Animal.cpp"
#include "Horse.h"
#include "Chicken.h"
#include "Cow.h"

int main()
{
    Horse thor = Horse("Thor", 123, 2);
    thor.eat();
    return 0;
}