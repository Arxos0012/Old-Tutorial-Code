#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter age: ";
    cin >> age;

    switch(age){

        case 16:    //each case tests to see if it is equal to a number
            cout << "You can drive now" << endl;
            break;  //stops testing cases and ends the switch
        case 18:
            cout << "You can buy lottery tickets" << endl;
            break;
        case 21:
            cout << "You can drink alcohol" << endl;
            break;

        default:    //defualt only executes when none of the other cases fit
            cout << "Sorry, your age isnt part of the matter." << endl;
    }

    return 0;
}
