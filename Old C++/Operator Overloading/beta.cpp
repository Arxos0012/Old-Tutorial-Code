#include <iostream>
#include "beta.h"
using namespace std;

beta::beta()
{
    //ctor
}

beta::beta(int a){
    num = a;
}

beta beta::operator+(beta abs){
    beta beat;  //this is the "c" class object
    beat.num = num + abs.num;
    //c's num = a's num + b's num
    //a becomes the class this function is in
    //b becomes abs
    //c becomes beat, which is returned

    return beat;
}
