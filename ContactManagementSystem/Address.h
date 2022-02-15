#ifndef ADDRESS_H
#define ADDRESS_H
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

class Address{
    private:
        string streetAddress;
        string state;
        string zip;
    public:
        Address(string, string, string);
        Address();
        string getStreetAddress()const;
        string getCity()const;
        string getState()const;
        string getZip() const;

        friend istream& operator>>(istream& in, Address& );
        friend ostream &operator<<(ostream &o, const Address &);

};

#endif