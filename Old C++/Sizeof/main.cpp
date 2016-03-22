#include <iostream>

using namespace std;
int main()
{
    char c;
    string s;
    int i;
    float f;
    double d;

    int a[5] = {0,1,2,3,4};

    //sizeof() returns the size of a variable (or collection of variables) in the unit of bytes
    //1 byte = 8 bits
    //a bit is a value of 0 or 1

    for(int x=0; x<6; x++){
        switch(x){
            case 0:
                cout << "Size of character c is: " << sizeof(c) << endl;
                break;
            case 1:
                cout << "Size of string s is: " << sizeof(s) << endl;
                break;
            case 2:
                cout << "Size of integer i is: " << sizeof(i) << endl;
                break;
            case 3:
                cout << "Size of float f is: " << sizeof(f) << endl;
                break;
            case 4:
                cout << "Size of double d is: " << sizeof(d) << endl;
                break;
            case 5:
                cout << "Size of array a is: " << sizeof(a) << endl;
                break;
        }
    }
    return 0;
}
