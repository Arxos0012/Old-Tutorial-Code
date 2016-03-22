#include <iostream>

using namespace std;

int main()
{
    /*the first [] is for the number of arrays you want
    in the multidimensional array. The second is the
    max number of elements for each array*/
    int dewitt[2][3] = {{12, 24, 48}, {3,6,9}};

    cout << dewitt[0][2] + dewitt[1][1] << endl;

    return 0;
}
