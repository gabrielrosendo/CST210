#include <iostream>
#include <fstream>
#include "Character.h"
#include "Store.h"
#include "Arena.h"

using namespace std;

int main()
{
    int num = 0;
    Store str;
    Character *hero;
    bool on = true;
    cout << "|FANTASY FIGHTING|" << endl;
    cout << "    | MENU |" << endl;
    cout << "| NEW GAME | 1 " << endl;
    cout << "| LOAD GAME | 2 " << endl;
    std::cin >> num;
    if (num == 2)
    {
        string nm;
        string wp;
        int lvl;
        int gold;
        ifstream fin("saved.txt");
        fin >> nm;
        hero = new Character(nm);
        fin >> wp;
        Weapon* heroWp = str.findWeapon(wp);
        hero->addWeapon(*heroWp);
        fin>>lvl;
        hero->level=lvl;
        fin>>gold;
        hero->gold = gold;
    }
    if (num == 1)
    {
        string nm;
        cout << "| CREATE YOUR CHARACTER |" << endl;
        cout << "NAME: ";
        std::cin >> nm;
        hero = new Character(nm);
    }
    while (on)
    {
        num = 0;
        cout << "\n**************\n";
        cout << "| MAIN MENU |" << endl;
        cout << "Welcome, ";
        cout << hero->getName() << endl;
        cout << " |         ARENA       | 1 " << endl;
        cout << " |         STORE       | 2 " << endl;
        cout << " | SHOW CHARACTER INFO | 3 " << endl;
        cout << " |       SAVE GAME     | 4 " << endl;
        std::cin >> num;
        if (num == 1)
        {
            Arena *arenaPtr = new Arena(hero);
            Villain *villain = arenaPtr->getNextOponent(hero->level);
            villain->showVillain();
            string in;
            cout << "| PRESS 'A' TO START THE FIGHT |" << endl;
            cout << " | PRESS 'B' TO TRAIN (+5 HP) |"<<endl;
            cin >> in;
            if (in == "A")
            {
                arenaPtr->fight(hero, villain);
            }
            if (in == "B")
            {
                cout<<"TRAINING..."<<endl;
                sleep(1);
                hero->setHp(hero->getHp() + 5);
            }
        }
        if (num == 2)
        {
            Weapon wp = str.Shop();
            if (wp.getCost() > hero->gold)
            {
                cout << "YOU DO NOT HAVE ENOUGH GOLD TO BUY THIS\n"<< endl;
                sleep(1);
            }
            else
            {
                hero->addWeapon(wp);
            }
        }
        if (num == 3)
        {
            hero->showHero();
        }
        if(num==4){
            ofstream fout("saved.txt");
            fout << hero->getName()<<endl;
            fout<< hero->getWeapon()<<endl;
            fout << hero->level<<endl;
        }
        int i;
        cout << "\nPRESS 1 TO GO BACK TO THE MAIN MENU: ";
        cin >> i;
        if (i != 1)
        {
            on = false;
        }
    }
}