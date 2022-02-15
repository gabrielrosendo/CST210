#include "die.h"

// costructor that takes no parameter
Die::Die()
{
    this->value = 0;
    this->sides = 6;
}

// constructor that takes an int as parameter
Die::Die(int newInt)
{
    // set value to int argument
    this->sides = newInt;
    this->value = 0;
}

// roll die
void Die::roll()
{
    int result = rand() % sides + 1;
    this->value = result;
}

// get die value
int Die::getValue()
{
    return this->value;
}

// reference methods
void showDice(Die dice[]);
int getTotalScore(Die dice[]);