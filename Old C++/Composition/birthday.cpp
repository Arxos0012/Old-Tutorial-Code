#include <iostream>
using namespace std;
#include "birthday.h"

birthday::birthday(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}

void birthday::printDate(){
    cout << month << "/" << day << "/" << year << endl;
}
