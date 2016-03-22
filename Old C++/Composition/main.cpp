#include <iostream>
using namespace std;
#include "birthday.h"
#include "people.h"

int main()
{
    birthday b(3,2,1998);
    people p("Jabari Booker", b);
    p.printInfo();

    return 0;
}
