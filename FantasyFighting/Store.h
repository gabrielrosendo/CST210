#ifndef STORE_H
#define STORE_H
#include "Weapon.h"
#include "Character.h"
#include <vector>
using namespace std;

class Store {
    private:
        Weapon* inventory[5];
    public: 
        Store();
        Weapon Shop();
};

Store::Store() {
    inventory[0] = new Weapon("SWORD", 20);
    inventory[1] = new Weapon("KNIFE", 15);
    inventory[2] = new Weapon("RIFLE", 20);
    inventory[3] = new Weapon("KATANA", 20);
    inventory[4] = new Weapon("HAMMER", 20);


}

Weapon Store::Shop() {
    int num;
    cout << "\n";
    cout << " | STORE |"<<endl;
    cout << "Welcome to the Store, these are the available weapons: "<< std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << inventory[i]->getName() << "(" << i << ")" << std::endl;
    }
    std::cout << "Type the number of the weapon you want to buy: "<< std::endl;
    std::cin >> num;
    return *inventory[num];
}


#endif