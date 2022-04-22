#ifndef STORE_H
#define STORE_H
#include "Weapon.h"
#include "Character.h"
#include <vector>
using namespace std;

class Store
{
private:
    Weapon *inventory[5];
public:
    Store();
    Weapon Shop();
    Weapon *findWeapon(string str);
};

Store::Store()
{
    // create and add all weapons to inventory
    inventory[0] = new Weapon("SWORD", 18, 35);
    inventory[1] = new Weapon("KNIFE", 25, 45);
    inventory[2] = new Weapon("RIFLE", 28, 60);
    inventory[3] = new Weapon("KATANA", 30, 65);
    inventory[4] = new Weapon("HAMMER", 32, 70);
}

Weapon *Store::findWeapon(string str)
{
    // look for name of weapon in inventory
    for (int i = 0; i < 5; i++)
    {
        if (str == inventory[i]->getName())
        {
            return inventory[i];
        }
    }
    return 0;
}

Weapon Store::Shop()
{
    int num;
    cout << "\n";
    cout << " | STORE |" << endl;
    // display weapons
    cout << "Welcome to the Store, these are the available weapons: " << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "(" << i << ")" << inventory[i]->getName() << " $" << inventory[i]->getCost() << std::endl;
    }
    // ask user what weapon they want to buy
    std::cout << "Type the number of the item you want to buy: " << std::endl;
    std::cin >> num;
    return *inventory[num];
}

#endif