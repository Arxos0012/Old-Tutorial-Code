#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;
//remember to always include the base class first

int main()
{
    Mother mom;
    Daughter daughter;

    mom.sayName();
    daughter.sayName();

    /*using inheritance allows other classes to use
    the same functions and variables*/

    return 0;
}
