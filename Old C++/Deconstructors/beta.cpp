#include <iostream>
using namespace std;
#include "beta.h"

//constructor - you can make more than one constructor
beta::beta(){
    cout << "This is the constructor." << endl;
}

//destructor - you can only create one destructor
beta::~beta(){
    cout << "This is the destructor." << endl;
}
//when the object of this class is destroyed this will run
