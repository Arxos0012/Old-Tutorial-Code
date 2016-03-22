#include <iostream>

using namespace std;

int water = 20;//global variable

int main()
{
    int water = 69;//local variable

    cout << water << endl;
    /*when the computer has a choice between a
    local and global variable with the same name, it
    will always use the local variable*/

    cout << ::water << endl;
    /*the ::, or unary scope resolution operator,
    tells the computer to use the global variable
    instead of the local one*/

    return 0;
}
