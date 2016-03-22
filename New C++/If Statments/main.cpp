#include <iostream>

using namespace std;

int main()
{
    //Now we will demonstrate if statements in C++!

    string name;
    int age;

    cout << "Hello, what is your name?: ";
    cin >> name;
    cout << "Hello there, " << name << ". Now what is your age?: ";
    cin >> age;

    if(age <= 0){
        cout << "How is this possible!?!?!?!" << endl;
    }else if(age > 0 && age < 10){
        cout << "What a spry little youngen!" << endl;
    }else if(age >= 10 && age < 18){
        cout << "Your gonna have to take responsibilities, and they're gonna suck..." << endl;
    }else if(age >= 18 && age < 30){
        cout << "Have while you still can!" << endl;
    }else{
        cout << "Yeah, your getting old..." << endl;
    }

    /*Binary Logic*/
    //&& return true if both cases are true
    //|| return true if one of the cases are true

    /*Inequality Operators*/
    // >  greater than
    // <  less than
    // == equal to
    // >= greater than or equal to
    // <= less than or equal to
    // != not equal to

    return 0;
}
