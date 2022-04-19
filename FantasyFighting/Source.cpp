#include "Character.h"
#include "Store.h"

using namespace std;

int main() {
    int num = 0;
    Store str;
    Character* hero;
    bool on = true;
    cout << "   | MENU |" << endl;
    cout << "| NEW GAME | 1 " << endl;
    cout << "| LOAD GAME | 2 " << endl;
    std::cin >> num;
    if (num == 2) {
        cout << "In progress";
        // read txt file
    }
    if (num == 1) {
        string nm;
        cout << "| CREATE YOUR CHARACTER |" << endl;
        cout << "NAME: ";
        std::cin >>nm;
        hero = new Character(nm);
    }
    while(on) {
        num = 0;
        cout<< "\n";
        cout << "| MAIN MENU |"<<endl;
        cout << "Welcome, ";
        cout << hero->getName() << endl;
        cout << " | ARENA | 1 "<< endl;
        cout << " | STORE | 2 "<<endl;
        cout << " | SHOW CHARACTER INFO | 3 " << endl;
        cout << " | SAVE GAME | 4 "<< endl;
        std::cin >> num;
        if (num == 1){
            cout<<"In progress";
        }
        if (num == 2) {
            Weapon wp = str.Shop();
            hero->addWeapon(wp);
        }
        if(num == 3) {
            hero->showCharacter();
        }
    }
    
} 