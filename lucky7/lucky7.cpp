#include <cstdlib>
#include <iostream>
#include <fstream>


using namespace std;

void f1();
void f2();
void f3();
void f4();
void f5();
void f6();
void f7();

int main () {
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
}
// read in 5 integers
// print the largest and the smallest of the group
void f1() {
    int curr, small, large;
    cout << "Enter 5 ints: ";
    // first entry is small and large 
    small = large = curr;

    for(int i = 1; i <= 4; i++){
        cin >> curr;
        if (curr < small)
            small = curr;
        else if (curr > large)
            large = curr;    
    }
    cout << "largest = " << large << " smallest = " << small << endl;
}

void f2() {
    int sum = 0;
    for(int i = 1; i <=50; i++) 
        sum += i * 7;
    cout << "sum = " << sum << endl;    
}

void f3() {
    int fact = 1;
    for (int i = 2; i <= 10; i++) {
        cout << fact << " ";
        fact = fact * i;
    }
    cout << endl;

}

void f4() {
    string test = "mom";
    int lastIndex = test.length() - 1;
    int firstIndex = 0;

    bool ok = true;
    while(ok && firstIndex < test.length()) {
        if (test[firstIndex] != test[lastIndex--])
            ok = false;
    }
    if(ok)
        cout << test << "is a palindrome\n";
    else 
        cout << test << "is not a palindrome\n";    
}

void f5() {
    int num;
    bool ok = true;
    cout << "Enter a positive int: ";
    cin >> num;
    for(int i = 2; i <= sqrt(num) && ok; i++) {
        if(num % i == 0){
            ok = false;
        }
    }
    if (ok)
        cout << num << " is prime" << endl;
    else
        cout << num << " is not prime" << endl;    
}

void f6() {
    vector<string> myStrings;
    myStrings.push_back("sun");
    myStrings.push_back("moon");
    myStrings.push_back("stars");

    for(int i = 0; i < myStrings.size(); i++) {
        cout <<myStrings[i]<< " ";
    }
    cout << endl;
}

void f7() {
    ifstream fin("text.txt");
    if (!fin) {
        cout << "file not found";
        exit(5);
    }
    cout <<"Enter size: ";
    //arrPtr[0] = 3;
    //arrPtr[1] = 1;
    //arrPtr[2] = 10;

    //delete [] arr;
    int size;
    cin>>size;
    string* arrPtr = new string[size];
    for(int i = 0; i < size; i++){
        fin >> arrPtr[i];
    }
    for(int i = 0; i < size; i++){
        cout << arrPtr[i];
    }
    
}