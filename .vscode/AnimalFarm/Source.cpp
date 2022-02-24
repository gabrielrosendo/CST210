#include "Animal.cpp"
#include "Horse.cpp"
#include "Chicken.cpp"
#include "Cow.cpp"

int main()
{
    Horse thor = Horse("Thor", 123, 2);
    thor.eat();
    return 0;
}