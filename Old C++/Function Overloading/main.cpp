#include <iostream>
using namespace std;

void printNumber(int x);
void printNumber(float y);

/*function overloading allows you to create
two functions of the same name that take different
parameters*/

int main()
{
    int a = 20;
    float b = 3.14;

    printNumber(a);
    printNumber(b);
    return 0;
}

void printNumber(int x){
    cout << "This number is an integer" << endl;
}

void printNumber(float y){
    cout << "This number is a float" << endl;
}
