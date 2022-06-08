#ifndef QUADRATIC_H
#define QUADRATIC_H
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

class QuadraticEquation{
    private:
        double a,b,c;
        bool nonnegDiscrim();
    public:
        QuadraticEquation(double, double, double); 
        double getSolution1();
        double getSolution2();   
        QuadraticEquation operator+(const QuadraticEquation& rhs);
        
        friend QuadraticEquation operator-(const QuadraticEquation& lhs, const QuadraticEquation& rhs);
        friend ostream& operator<<(ostream& out, const QuadraticEquation& rhs);
};

QuadraticEquation::QuadraticEquation(double a, double b, double c){
    this->a = a;
    this->b = b;
    this->c = c;
}

bool QuadraticEquation::nonnegDiscrim(){
    // calculate discriminant
    double disc = b * b - 4 * a * c;
    return disc >= 0;
}

double QuadraticEquation::getSolution1(){
    if(!nonnegDiscrim()) return 0;
    else{
        double disc = b * b - 4 * a * c;
        double solution = (-b - sqrt(disc)) / (2 * a);
        return solution;
    }
}

double QuadraticEquation::getSolution2(){
    if(!nonnegDiscrim()) return 0;
    else{
        double disc = b * b - 4 * a * c;
        double solution = (-b + sqrt(disc)) / (2 * a);
        return solution;
    }
}

QuadraticEquation QuadraticEquation::operator+(const QuadraticEquation& rhs) {
    // sum the coefficients
    double newA = this->a + rhs.a;
    double newB = this->b + rhs.b;
    double newC = this->c + rhs.c;

    // make a new quadratic equation with the new coefficients
    QuadraticEquation result(newA, newB, newC);
    return result;
}

QuadraticEquation operator-(const QuadraticEquation& lhs, const QuadraticEquation& rhs){
    double newA = lhs.a - rhs.a;
    double newB = lhs.b - rhs.b;
    double newC = lhs.c - rhs.c;

    QuadraticEquation result(newA, newB, newC);
    return result;
}

ostream& operator<<(ostream& out, const QuadraticEquation&rhs) {
    // output the first coefficient
    out << rhs.a;
    // output x^2
    out << "x^2";
    // output a "+"
    out << " + ";
    // output the second coefficient
    out << rhs.b;
    // output x
    out << "x";
    // output a " + "
    out << " + ";
    // output the last coefficient
    out << rhs.c;
    // return the output buffer
    return out;
}

#endif

int main(){
    
    QuadraticEquation eq(3, 13, -10);
    QuadraticEquation eq2(3, -12, -10);

    // add them together 
    QuadraticEquation sum = eq + eq2;
    QuadraticEquation difference = eq - eq2;

    cout << "(" << eq << ") - (" << eq2 << ") = (" << difference << ")";
}