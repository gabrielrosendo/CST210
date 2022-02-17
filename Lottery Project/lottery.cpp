#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

bool checkVal();
vector<int> getNumbers();
void setPowerball(vector<int> &numbers);
void showNumbers(vector<int> numbers);

int main()
{
    // this makes so that every time I call rand, there are different numbers
    srand(time(0));
    // initialize variables
    int times;
    string ans;
    do
    {
        // ask user for amount of numbers
        cout << "How many lottery numbers would you like to see?" << endl;
        cin >> times;
        for (int i = 0; i < times; i++)
        {
            // call function to get numbers
            vector<int> numbers = getNumbers();
            // cal function to get powerball
            setPowerball(numbers);
            // show numbers
            showNumbers(numbers);
        }
        cout << "Would you like to see new numbers? (y/n)" << endl;
        cin >> ans;
    } while (ans != "n");
}

void showNumbers(vector<int> numbers)
{
    cout << "Your numbers are: ";
    // loop through numbers printing out the results
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i];
        if (i < 4)
            cout << "-";
    }
    // print out powerball
    cout << " Powerball " << numbers[5];
    cout << endl;
}
// checks if the number was already chosen
bool checkVal(vector<int> numbers, int size, int value)
{
    // loop to compare value with all the other values in the vector
    for (int i = 0; i < size; ++i)
    {
        if (numbers[i] == value)
        {
            return true;
        }
    }
    return false;
}
// sets powerball  by choosing a handom int between 1 and 26
void setPowerball(vector<int> &numbers)
{
    for (int i = 5; i < 6; i++)
    {
        int last = rand() % 26 + 1;
        if (checkVal(numbers, i, last))
        {
            i--;
        }
        else
        {
            numbers.push_back(last);
        }
    }
}

vector<int> getNumbers()
{
    vector<int> numbers;
    for (int i = 0; i < 5; i++)
    {
        int num = rand() % 69 + 1;
        // checks if this number is already in the vector

        if (checkVal(numbers, i, num))
        {
            // if it is, it loops again to choose another number
            i--;
        }
        else
        {
            // if not, the number is added to the vector

            numbers.push_back(num);
        }
    }
    // sort numbers starting with the smallest value
    sort(numbers.begin(), numbers.end());
    // return 5 numbers 
    return numbers;
}