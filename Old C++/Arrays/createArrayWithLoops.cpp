#include <iostream>
using namespace std;

int main()
{
    int jabari[9];

    cout << "Element  -  Value" << endl;

    for(int x=0; x<9; x++){
        jabari[x] = 99;
        cout << x << "  -----  " << jabari[x] << endl;
    }

    return 0;
}
