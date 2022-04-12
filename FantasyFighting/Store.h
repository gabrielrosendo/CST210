#ifndef STORE_H
#define STORE_H
#include "Weapon.h"
#include "Character.h"
#include <vector>

class Store {
    private:
        std::vector<Weapon*> inventory;
    public: 
        Store();
        void displayInventory();
        Weapon sellWeapon();    
};

Store::Store() {
    inventory[0] = new Weapon("Sword", 20);
    inventory[1] = new Weapon("Knife", 15);
    inventory[2] = new Weapon("Rifle", 20);
}

void Store::displayInventory() {
    for (int i = 0; i < inventory.size(); i++) {
        std::cout << inventory[i]->getName() << std::endl;
    }
}

Weapon Store::sellWeapon() {
    int num;
    std::cout << "Welcome to the Store, these are the available weapons: "<< std::endl;
    for (int i = 0; i < inventory.size(); i++) {
        std::cout << inventory[i]->getName() << "(" << i << ")" << std::endl;
    }
    std::cout << "Type the number of the weapon you want to buy: "<< std::endl;
    std::cin >> num;
    addWeapon(inventory[num]);
}

#endif