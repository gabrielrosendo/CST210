#include "die.cpp"

int main()
{
    srand(time(NULL));
    string str = "";
    // allow user to roll dies 3 times
    for (int i = 0; i < 3; i++)
    {
        // if user types 'n'
        if (str == "n")
        {
            // quit program
            return 0;
        }
        // initialize die array
        Die dice[5];
        // create and roll 5 different dies
        for (int j = 0; j < 5; j++)
        {
            Die newDie;
            newDie.roll();
            dice[j] = newDie;
        }
        // show results
        showDice(dice);
        cout << "Total: ";
        cout << getTotalScore(dice);
        cout << "\n";
        if (i >= 0 && i != 2)
        {
            // ask if user wants to re-roll
            cout << "Do you want to re-roll? (y/n)";
            cout << "\n";
            cin >> str;
        }
    }
}

void showDice(Die dice[])
{
    for (int i = 1; i <= 5; i++)
    {
        cout << i;
        cout << " ";
    }
    cout << " " << endl;

    for (int j = 0; j < 5; j++)
    {
        cout << "-";
        cout << ' ';
    }
    cout << "\n";
    // print out all values in the die[]
    for (int i = 0; i < 5; i++)
    {
        cout << dice[i].getValue();
        cout << " ";
    }
    cout << "\n";
}

int getTotalScore(Die dice[])
{
    // initialize total to 0
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        // add value of each int to total
        total += dice[i].getValue();
    }
    return total;
}
