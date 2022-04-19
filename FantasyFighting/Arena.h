#ifndef ARENA_H
#define ARENA_H

#include "Character.h"
using namespace std;


class Arena
{
private:
    Character* hero;
    Character* villain;
public:
    Arena(Character* myHero);
     Character* getNextOponent(int level);
};

Arena::Arena(Character* myHero)
{
    this->hero = myHero;
    cout << "Welcome to the Arena!" << endl;
    cout << "You are at level ";
    cout << myHero->level;
    cout << " out of 10"<<endl;
}

 Character* Arena::getNextOponent(int level)
{
    cout<<" || LEVEL "<< level << " || ";
    if (level == 1)
    {
        Character *n1 = new Character("GOBLIN");
        n1->addWeapon(*new Weapon("GOBLIN SWORD", 20));
        return n1;
    }
    if (level == 2)
    {
        Character *n2 = new Character("EVIL KNIGHT");
        n2->addWeapon(*new Weapon("SWORD", 20));
        return n2;
    }
    if (level == 3)
    {
        Character *n3 = new Character("GOBLIN");
        n3->addWeapon(*new Weapon("SWORD", 20));
        return n3;
    }
    if (level == 4)
    {
        Character *n4 = new Character("GOBLIN");
        n4->addWeapon(*new Weapon("SWORD", 20));
        return n4;
    }
    if (level == 5)
    {
        Character *n5 = new Character("GOBLIN");
        n5->addWeapon(*new Weapon("SWORD", 20));
        return n5;
    }
}

#endif