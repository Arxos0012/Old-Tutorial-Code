#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));/*allows you to change the seed
              of the random number generator
              and therefore the numbers generated*/

    /*time(0) returns time since a starting point from
    a long time ago. Since time increases, you can
    constantly change the seed*/

    for(int x = 1; x<25; x++){
        cout << (rand() % 6) + 1 << endl;
    }
    return 0;
}
