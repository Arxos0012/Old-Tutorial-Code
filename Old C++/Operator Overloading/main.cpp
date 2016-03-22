#include <iostream>
#include "beta.h"
using namespace std;

int main()
{
    beta b(34);
    beta c(21);
    beta d;

    d = b+c;    //will call "beta operator+(beta abs)"
    cout << d.num << endl;

    return 0;
}
