#ifndef CONTACT_H
#define CONTACT_H
#include <cstdlib>
#include <iostream>
#include "Address.h"
#include "Name.h"

using namespace std;

class Contact
{
private:
    static int totalCt;
    Name name;
    Address address;
    string phone;
    int identifier;
public:

    Contact();
    Contact(string fName, string lName, string street, string state, string zip, string phone);
    string getName() const;
    string getAddress() const;
    string getPhone() const;
    int getIdentifier() const;
    void setIdentifier();
    void setName(string, string);
    void setAddress(string, string, string);

    friend istream &operator>>(istream &in, Contact &);
    friend ostream &operator<<(ostream &o, const Contact &);
};

#endif