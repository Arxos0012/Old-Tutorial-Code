#include <iostream>
using namespace std;

template <class typeOne, class typeTwo>

typeOne smaller(typeOne a, typeTwo b){
    return (a<b ? a:b);
    /*this line of code means: "if a is less than b,
    return a. if not return b."
    Its like a one like if/else statement*/
}

/*because the return type is the same as the first
parameter, it returns an integer*/

int main()
{
    int x = 89;
    double y = 56.78;

    cout << smaller(x,y) << endl;
    return 0;
    /*when you have more than one type of data, you
    need to create a template for each type needed*/
}
