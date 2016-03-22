#include <iostream>
using namespace std;

int main()
{
    int coffee = 5;

    cout << &coffee << endl; //example of a reference
    /*Using the "&" symbol before the name of a variable
    you can access the memory address of that variable.
    In other words, it returns a hexadecimal number that
    represents where in your memory that variable is
    stored*/

    int *coffeePointer;
    //the astrid tells the computer this is a pointer
    /*from here on you only type the name of the
    pointer to use it*/

    coffeePointer = &coffee;

    cout << coffeePointer << endl;

    //pointers point to the location of a variable
    return 0;
}
