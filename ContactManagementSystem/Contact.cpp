#include "Contact.h"
#include "Address.h"
#include "Name.h"

// set identifier based on the total count
void Contact::setIdentifier()
{
    totalCt++;
    this->identifier = totalCt;
}

int Contact::getIdentifier() const
{
    return this->identifier;
}

// constructor with no parameter
Contact::Contact()
{
    this->name = Name();
    this->address = Address();
    this->phone = "xxx-xxx-xxxx";
    // do not update totalCt until all attributes are signed
    this->identifier = -1;
}

// constructor that takes 5 strings as parameter
Contact::Contact(string fName, string lName, string street, string state, string zip, string phone)
{
    this->name = Name(fName, lName);
    this->address = Address(street, state, zip);
    this->phone = phone;
}

string Contact::getName() const
{
    string curName = "";
    curName += name.getFName();
    curName += name.getLName();
    return curName;
}

string Contact::getAddress() const
{
    string curAddress = "";
    curAddress += address.getStreetAddress();
    curAddress += "\n";
    curAddress += address.getState();
    curAddress += "\n";
    curAddress += address.getZip();
    return curAddress;
}

string Contact::getPhone() const
{
    return phone;
}

void Contact::setName(string fName, string lName)
{
    this->name = Name(fName, lName);
}

void Contact::setAddress(string street, string state, string zip)
{
    this->address = Address(street, state, zip);
}

ostream &operator<<(std::ostream &o, const Contact &rhs)
{
    o << rhs.name << endl;
    o << rhs.address << endl;
    o << rhs.phone << endl;
    return o;
}

istream &operator>>(istream &in, Contact &rhs)
{
    int id;
    in >> rhs.identifier;
    in >> rhs.name;
    in >> rhs.address;
    in >> rhs.phone;
    if (id == -1)
        rhs.identifier = id;
    else
    {
        rhs.setIdentifier();
    }
    return in;
}