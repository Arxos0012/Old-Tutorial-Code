#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("I have way too much origami.");

    cout << s1.substr(11, 17) << "\n" <<endl;
    //"substr()" returns part of a string
    /*The first parameter is the starting character.
    The second parameter is the length of the
    substring*/

    /************************************************/

    string one("apples ");
    string two("beans ");

    cout << one << two << endl;
    one.swap(two);  //swaps the value of two strings
    cout << one << two << "\n" << endl;

    /************************************************/

    string s2("polygon, polymorphism, polyhedron");

    cout << s2.find("poly") << endl;
    /*starts from the beginning and scans for the
    first location of the substring*/

    cout << s2.rfind("poly") << endl;
    /*starts from the end and scans for the
    first location of the substring*/

    return 0;
}
