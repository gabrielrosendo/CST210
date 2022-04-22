#ifndef ARENA_H
#define ARENA_H
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include "Character.h"
#include "Villain.h"
using namespace std;

class Arena
{
private:
    Character *hero;
    Character *villain;
public:
    Arena(Character *myHero);
    Villain *getNextOponent(int level);
    void fight(Character *hero, Villain *villain);
};

Arena::Arena(Character *myHero)
{
    this->hero = myHero;
    cout << "Welcome to the Arena!" << endl;
    cout << "You are at level ";
    cout << myHero->level;
    cout << " out of 6" << endl;
}

void Arena::fight(Character *hero, Villain *villain)
{
    int bonus = 0;
    // get hp of both
    int hrHp = hero->getHp();
    int vlHp = villain->getHpVl();
    // while they are both alive
    while (hrHp > 0 && vlHp > 0)
    {
        cout << "ATTACKING " << villain->getNameVl() << " WITH A " << hero->getWeapon()<<endl;
        int hrDmg = hero->attack();
        bonus+=1;
        vlHp-=hrDmg;
        sleep(1);
        cout<<"|| "<<villain->getNameVl()<<" LOST "<<hrDmg<<" HEALTH POINTS ||"<<endl;
        if(vlHp <= 0){
            cout<< hero->getName() << " WON!"<<endl;
            hero->level+=1;
            // bonus gold based on how many rounds were fought
            hero->gold+=20 + bonus*2;
            cout<<"YOU'VE GAINED "<< 20 + bonus*2<< " GOLD"<<endl;
            break;
        }
        cout<< villain->getNameVl()<< " is attacking you with a "<< villain->getWeaponVl()<<endl;
        sleep(1);
        int vlDmg = villain->attack();
        hrHp-=vlDmg;
        cout<<"|| YOU LOST "<<vlDmg<<" HEALTH POINTS ||\n"<<endl;
        if(hrHp<=0){
            cout<<"YOU LOST"<<endl;
            cout<< villain->getNameVl() << " WON!"<<endl;
            break;
        }

    }
}

// return pointer to next oponent
Villain *Arena::getNextOponent(int level)
{
    cout << " || LEVEL " << level << " || ";
    if (level == 1)
    {
        Villain *n1 = new Villain("GOBLIN");
        n1->addWeaponVl(*new Weapon("GOBLIN SWORD", 15));
        return n1;
    }
    if (level == 2)
    {
        Villain *n2 = new Villain("EVIL KNIGHT");
        n2->addWeaponVl(*new Weapon("SWORD", 24));
        return n2;
    }
    if (level == 3)
    {
        Villain *n3 = new Villain("BABY DRAGON");
        n3->addWeaponVl(*new Weapon("DRAGON RAGE", 27));
        return n3;
    }
    if (level == 4)
    {
        Villain *n4 = new Villain("GOLEM");
        n4->addWeaponVl(*new Weapon("HEAVY PUNCH", 28));
        return n4;
    }
    if (level == 5)
    {
        Villain *n5 = new Villain("BLACK DRAGON");
        n5->addWeaponVl(*new Weapon("BLACK MAGIC", 30));
        return n5;
    }
    if (level == 6)
    {
        Villain *n5 = new Villain("FINAL BOSS - DARK KNIGHT");
        n5->addWeaponVl(*new Weapon("DIAMOND SWORD", 35));
        return n5;
    }
    return 0;
}

#endif