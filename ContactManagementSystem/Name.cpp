#include "Name.h"

// constructor with no parameter
Name::Name()
{
    this->firstName = "";
    this->lastName = "";
}

// constructor that takes 2 strings as parameter
Name::Name(string fName, string lName)
{
    this->firstName = fName;
    this->lastName = lName;
}

string Name::getLName() const
{
    return this->lastName;
}

string Name::getFName() const
{
    return this->firstName;
}

void Name::setLName(string lName)
{
    this->lastName = lName;
}

void Name::setFName(string fName)
{
    this->firstName = fName;
}

ostream &operator<<(std::ostream &o, const Name &rhs)
{
    o << rhs.firstName << endl;
    o << rhs.lastName;
    return o;
}

istream &operator>>(istream &in, Name &rhs)
{
    getline(in, rhs.lastName);
    getline(in, rhs.firstName);
    return in;
}
