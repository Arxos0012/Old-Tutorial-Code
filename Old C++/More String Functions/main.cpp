#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("hi my name is jabari and i love computers and origami");

    cout << s1 << endl;
    s1.erase(20);
    /*erases from a starting index on to end of the
    string*/
    cout << s1 << "\n" <<endl;

    /************************************************/
    s1 = "hi my name is jabari and i love computers and origami";

    cout << s1 << endl;
    s1.replace(14, 6, "ashante");
    /*replaces from a starting index on a certain
    number of characters with a different substring*/
    cout << s1 << "\n" <<endl;

    /************************************************/
    s1 = "hi my name is jabari and i love computers and origami";

    cout << s1 << endl;
    s1.insert(21, "booker ");
    /*inserts a string in at a certain index*/
    cout << s1 <<endl;

    return 0;
}
