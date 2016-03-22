#include <iostream>
#include <string> //gives you string functions
using namespace std;

int main()
{
    string x;
    getline(cin, x);
    //"cin" only reads to first whitespace
    //"getline" reads a whole line of input
    cout << x << "\n" <<endl;

    string s1("hampster ");
    //another way of creating a string
    string s2;
    string s3;

    s2 = s1;    //makes s2 equal the value of s1
    s3.assign(s1);//makes s3 equal the value of s1

    cout << s1 << s2 << s3 << "\n" << endl;

    string s4 = "Daftabike";
    cout << s4.at(3) << " is the 4th character in s4."<< "\n" <<endl;
    /*"at()" returns a character in a string an exact
    index*/

    for(int x=0; x<s4.length(); x++){
        //"length()" returns the length of a character
        cout << s4.at(x) << endl;
    }

    return 0;
}
