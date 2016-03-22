#include <iostream>
using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main()
{
    int trine = 13;
    int brine = 13;

    passByValue(trine);
    passByReference(&brine);

    cout << trine << endl;
    cout << brine << endl;

    return 0;
}

void passByValue(int x){
    x = 99;
    //changes a copy of the variable
}

void passByReference(int *x){
    *x = 66;
    //changes the varible at its address
}
