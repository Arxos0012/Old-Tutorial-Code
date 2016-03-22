#include <iostream>

using namespace std;

float plas = 69;

int main()
{
    int plas = 20;

    cout << "This is the \"in-function\" plas: " << plas << endl;
    cout << "This is the \"global\" plas: " << ::plas << endl;
    /*The "::", or unary scope resolution operator, uses the global form
    of an integer. This is useful when an local and global variable have the
    same name. This allows for variables of the same name that are even of
    different data types*/

    return 0;
}
