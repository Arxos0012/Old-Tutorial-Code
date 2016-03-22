#include <iostream>
using namespace std;
#include "beta.h"

beta::beta(){}

void beta::printerP(){
    cout << "This is a regular function." << endl;
}

void beta::printerV() const{
    cout << "This is a const function." << endl;
}// how you write a const function
