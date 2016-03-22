#include <iostream>

using namespace std;

int main()
{
    /*Switch statements can come in handy and replace if statements.
    This however is limited to:
    -checking very specific cases
    -only being able to check integers and characters
    Switches are best limited to a simple small set of cases*/

    int age;

    cout << "What is your age?: ";
    cin >> age;

    switch(age){
        case 16:
            cout << "OMG you can drive now!!!" << endl;
            break;
            //must break out of the switch statement or it will check all other cases
            //and/or execute the default at the end
        case 18:
            cout << "Look at you! You're an adult now!" << endl;
            break;
        case 21:
            cout << "Time to drink! But don't get wasted..." << endl;
            break;
        default:
            cout << "Sorry, nothing special going on..." << endl;
            //default is similar to else, but will execute even if a case was met if there wasn't a break before
            //no reason to break here as you are at the end of the switch statement
    }

    return 0;
}
