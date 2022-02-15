#ifndef NAME_H
#define NAME_H
#include <iostream>

using namespace std;

class Name{
    private:
        string firstName;
        string lastName;
    public:
        Name();
        Name(string, string);
        string getLName() const;
        string getFName() const;
        void setLName(string);
        void setFName(string); 

        friend istream& operator>>(istream& in, Name& rhs);
        friend ostream& operator<<(std::ostream& o, const Name& rhs);
};

#endif