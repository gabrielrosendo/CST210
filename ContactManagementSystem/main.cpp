#include "Contact.cpp"
#include "Address.cpp"
#include "Name.cpp"
#include <fstream>
#include <vector>
#include <iostream>
#include <sstream>
#include <string>

int Contact::totalCt;

int main()
{
    // open file
    ifstream fin("text.txt");
    // create vector to store all contacts
    vector<Contact> myContacts;
    string curFName, curLName, curAddress, curState, curZip, curPhone;
    if (fin)
    {
        while (!fin.eof())
        // add all contacts in the file to vector
        {
            getline(fin, curFName);
            getline(fin, curLName);
            getline(fin, curAddress);
            getline(fin, curState);
            getline(fin, curZip);
            getline(fin, curPhone);
            // create new contact
            Contact cur = Contact(curFName, curLName, curAddress, curState, curZip, curPhone);
            // set id of new contact
            cur.setIdentifier();
            // add it to vector
            myContacts.push_back(cur);
        }
    }

    int ans;
    ofstream file;
    // open file to output to it
    file.open("text.txt", fstream::app);
    // while user's input is not -1
    while (ans != -1)
    {
        cout << "Enter 1 to search for contacts, 2 to add contacts or -1 to quit: \n";
        cin >> ans;
        if (ans == -1)
            return 0;
        if (ans == 2)
        // add new contact
        {
            string fName, lName, address, state, zip, num;
            // ask for new contact info
            cout << "Enter first name: ";
            cin >> fName;
            cout << "Enter last name: ";
            cin >> lName;
            cout << "Enter street address: ";
            cin.ignore();
            getline(cin, address);
            cout << "Enter State: ";
            getline(cin, state);
            cout << "Enter Zip: ";
            cin >> zip;
            cout << "Enter Phone Number: ";
            cin >> num;
            // create new contact
            Contact cntct = Contact(fName, lName, address, state, zip, num);
            // set id of new contact
            cntct.setIdentifier();
            // add it to vector
            myContacts.push_back(cntct);
            // write new contact to file
            file << fName << endl;
            file << lName << endl;
            file << address << endl;
            file << state << endl;
            file << zip << endl;
            file << num << endl;
            file.close();
        }
        // find a contact
        if (ans == 1)
        {
            int id;
            // ask user for identifier to look for
            cout << "Enter identifier to search: " << endl;
            cin >> id;
            // if id is not out of bounds and lot less than 0
            if (myContacts.size() > id && id >= 0) 
            {
                cout << myContacts.at(id);
            }
            else {
                cout << "Identifier not found" << endl;
            }
        }
    }

    return 0;
}