#include <iostream>

using namespace std;

int main(){
    srand(time(NULL));

    int * myArr = new int [10];
    // fill with 10 random ints
    for(int i = 0; i < 10; i++){
        myArr[i] = rand() % 1000;
    }

    // print it
    for (int i = 0; i < 10; i++){
        printf("%5d", myArr[i]);
    }
    cout<<endl;
}