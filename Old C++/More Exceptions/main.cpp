#include <iostream>
using namespace std;

int main()
{
    try{
        int num1;
        int num2;

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        if(num2 == 0) throw 0;

        cout << num1/num2 << endl;

    }catch(...){
        cout << "ERROR: You cannot divide by zero." << endl;
    }

    /*"..." is used when you can to catch any
    exception regardless of what type it is. String,
    int, double, doesn't matter! If its an exception
    it will be caught.*/

    return 0;
}
