#include <iostream>
using namespace std;
#include "beta.h"

int main()
{
    beta beat;
    const beta beatB;

    beat.printerP();
    beatB.printerV();

    //constant functions of a different class only run in
    //constant constant class objects, and vice versa
    return 0;
}
