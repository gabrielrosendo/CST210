#include "Contact.h"
#include "Address.h"
#include "Name.h"
// constructor that takes 3 strings as parameter
Address::Address(string street, string state, string zip)
{
    this->streetAddress = street;
    this->state = state;
    this->zip = zip;
}

// constructor with no parameters
Address::Address()
{
    this->streetAddress = "";
    this->state = "";
    this->zip = "";
}

string Address::getStreetAddress() const
{
    return this->streetAddress;
}


string Address::getState() const
{
    return this->state;
}

string Address::getZip() const
{
    return this->zip;
}

ostream& operator<<(std::ostream& o, const Address& rhs) {
    o << rhs.streetAddress << "\n" << rhs.state << "\n" << rhs.zip;
    return o;
}

istream& operator>>(istream& in, Address& rhs){
    getline(in, rhs.streetAddress);
    getline(in, rhs.state);
    getline(in, rhs.zip);
    return in;
}
