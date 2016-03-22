#include <iostream>
using namespace std;

template <class jabari>
/*this is how you create a template, the class of
whatever name is chosen servers as your generic data
type*/

jabari add(jabari a, jabari b){
    return a+b;
}

int main()
{
    int x = 20, y = 80;

    cout << add(x,y) << endl;

    return 0;
}

/*templates allow you to use any type of variable when
you are unsure of what it will be. NOTE: you cannot
pass variables that are different types AT ALL.*/
