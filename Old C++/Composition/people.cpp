#include <iostream>
using namespace std;
#include "birthday.h"
#include "people.h"

people::people(string x, birthday date)
//when one of these variables are a class object you must use member initializing on that variable, but it is not needed for all, just the class objects and constant variables
: name(x), dateOfBirth(date)
{}

void people::printInfo(){
    cout << name << " was born on ";
    dateOfBirth.printDate();
}
