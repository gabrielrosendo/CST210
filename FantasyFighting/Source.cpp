#include <iostream>
#include <fstream>
#include "Character.h"
#include "Store.h"
#include "Arena.h"

using namespace std;

int main()
{
    // create objects and variables
    int num = 0;
    Store str;
    Character *hero;
    bool on = true;
    // display options
    cout << "|FANTASY FIGHTING|" << endl;
    cout << "    | MENU |" << endl;
    cout << "| NEW GAME | 1 " << endl;
    cout << "| LOAD GAME | 2 " << endl;
    std::cin >> num;
    if (num == 2)
    {
        string nm;
        string wp;
        int prevLvl;
        int prevGold;
        int prevHp;
        // read txt file to load game
        ifstream fin("saved.txt");
        fin >> nm;
        hero = new Character(nm);
        fin >> wp;
        Weapon *heroWp = str.findWeapon(wp);
        hero->addWeapon(*heroWp);
        fin >> prevLvl;
        hero->level = prevLvl;
        fin >> prevGold;
        hero->gold = prevGold;
        fin >> prevHp;
        hero->setHp(prevHp);
    }
    if (num == 1)
    {
        // create new character
        string nm;
        cout << "| CREATE YOUR CHARACTER |" << endl;
        cout << "NAME: ";
        std::cin >> nm;
        hero = new Character(nm);
    }
    Arena *arenaPtr = new Arena(hero);
    while (on)
    {
        num = 0;
        // display main menu
        cout << "\n**************\n";
        cout << "      | MAIN MENU |" << endl;
        cout << "       Welcome, ";
        cout << hero->getName() << endl;
        cout<<"     You have "<<hero->gold<<" gold"<<endl;
        cout << " |         ARENA       | 1 " << endl;
        cout << " |         STORE       | 2 " << endl;
        cout << " | SHOW CHARACTER INFO | 3 " << endl;
        cout << " |       SAVE GAME     | 4 " << endl;
        cout << " |       QUIT GAME     | 5 " << endl;
        std::cin >> num;
        if (num == 1)
        {
            // get next level's oponent
            Villain *villain = arenaPtr->getNextOponent(hero->level);
            villain->showVillain();
            string in;
            // give option to fight villain or train
            cout << "| PRESS 'A' TO START THE FIGHT |" << endl;
            cout << " | PRESS 'B' TO TRAIN (+5 HP) |" << endl;
            cin >> in;
            if (in == "A")
            {
                arenaPtr->fight(hero, villain);
                // if at level 7, end program
                if (hero->level == 7)
                {
                    cout << "***CONGRATS, YOU BEAT FANTASY FIGHTING!***" << endl;
                    return 0;
                }
            }
            if (in == "B")
            {
                cout << "TRAINING..." << endl;
                sleep(1);
                // update hp
                hero->setHp(hero->getHp() + 5);
            }
        }
        if (num == 2)
        {
            Weapon wp = str.Shop();
            // if weapon cost more than how much gold user has
            if (wp.getCost() > hero->gold)
            {
                cout << "YOU DO NOT HAVE ENOUGH GOLD TO BUY THIS\n"<< endl;
                sleep(1);
            }
            else
            {
                // if user has enough money, add weapon 
                hero->addWeapon(wp);
            }
        }
        if (num == 3)
        {
            hero->showHero();
        }
        if (num == 4)
        {
            // write info to file to save game
            ofstream fout("saved.txt");
            fout << hero->getName() << endl;
            fout << hero->getWeapon() << endl;
            fout << hero->level << endl;
            fout << hero->gold << endl;
            fout << hero->getHp() << endl;
        }
        if (num == 5)
        {
            // quit game
            return 0;
        }
        int i;
        cout << "\nPRESS 1 TO GO BACK TO THE MAIN MENU OR SOMETHING ELSE TO QUIT: ";
        cin >> i;
        if (i != 1)
        {
            on = false;
        }
    }
}