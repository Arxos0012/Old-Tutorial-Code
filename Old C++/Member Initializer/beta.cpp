#include <iostream>
using namespace std;
#include "beta.h"

beta::beta(int r, int c)
:regVar(r), constVar(c)
/*no semicolon at the end. you can set regular variable this way like regVar but constant variables MUST ALWAYS be set in this manner*/
{
}

void beta::print(){
    cout << "Regular Var is: "<< regVar << ", Constant var is: " << constVar <<endl;
}
