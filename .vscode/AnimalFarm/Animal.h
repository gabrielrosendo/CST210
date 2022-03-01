#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>


using namespace std;

class Animal {
    protected:
        double weight;
        string name;
        double height;
    private:
        void gainWeight();
    public:
        Animal();    
        Animal(string, double, double);
        string getName()const;
        double getWeight()const;
        double getHeight()const;
        void setWeight(double);
        void setName(string);
        void setHeight(double);
        void eat();

};



#endif