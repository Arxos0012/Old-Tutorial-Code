#include <iostream>
#include "beta.h"
using namespace std;

beta::beta(int num)
:h(num)
{
}

void beta::print(){
    cout << "h = " << h << endl;

    cout << "this->h = " << this->h << endl;
    /*here, the computer is told to refer to the
    class object that the function is in (go
    to main.cpp) and print the variable h there*/

    cout << "(*this).h = " << (*this).h << endl;
    /*here, the computer is told to go to the
    memory address of the class object that the
    function is in (go to main.cpp) and print the
    variable h there*/
}
