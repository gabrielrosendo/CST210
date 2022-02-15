#ifndef MYSTRING_H
#define MYSTRING_H

#include <cstdlib>
#include <iostream>

using namespace std;

class Die
{
private:
    int value;
    int sides;
public:    
    Die();
    Die(int newInt);
    void roll();
    int getValue();
    void showDice(Die dice[]);
};

#endif
