#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

int main()
{
    Mother mom;
    Daughter daughter;
    /*because daughter inherits from mother it will
    call mother's constructor and destructor as
    well as its own*/
    return 0;
}
