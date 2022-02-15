#include <cstdlib>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    string str = "";
    while (str != "quit")
    {
        // initialize variables
        string encptd = "";
        int key = 0;
        // ask for words
        cout << "Enter words to encrypt, enter \"quit\" to quit: ";
        std::cin.ignore();
        getline(cin, str);

        // check if user wants to quit program
        if (str == "quit")
        {
            return 0;
        }

        string arr[8];
        int i = 0;
        stringstream ssin(str);
        // create array with the original words
        while (ssin.good() && i < 8)
        {
            ssin >> arr[i];
            ++i;
        }

        // ask for key
        cout << "Enter the key: ";
        cin >> key;

        for (int i = 0; i < str.length(); i++)
        {
            // if there is a space, copy it to the encrypted string
            if (str[i] == ' ')
            {
                encptd += ' ';
            }
            else
            {
                // encrypt words
                int value = int(str[i]) - 97;
                int enc = ((value + key) % 26) + 97;
                encptd += tolower(char(enc));
            }
        }

        // create array to store encrypted words
        string encryp[8];
        int j = 0;
        stringstream ssin2(encptd);
        // copy words from string to array
        while (ssin2.good() && j < 8)
        {
            ssin2 >> encryp[j];
            ++j;
        }

        // print out results
        for (i = 0; i < 8; i++)
        {
            printf("%-5s %-5s\n", arr[i].c_str(), encryp[i].c_str());
        }
    }

    return 0;
}