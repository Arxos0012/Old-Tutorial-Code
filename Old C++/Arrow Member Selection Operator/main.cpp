#include <iostream>
using namespace std;
#include "beta.h"

int main()
{
    beta beater;
    beta *beaterP = &beater; //pointer pointing to the address of the class

    beater.printCrap();
    beaterP->printCrap(); //aacessed the method through the use of a pointer
    //when using a point you must use the "->" (arrow member selection operator)

    return 0;
}
