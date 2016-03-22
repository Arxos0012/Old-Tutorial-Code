#include <iostream>
using namespace std;

int main()
{
    try{
    /*try means that the computer will run the code
    expecting an error*/
        int momAge = 30, sonAge = 34;

        if(sonAge > momAge){
            throw 99;
            //throws an exception, in this case 99
        }
    }catch(int x){//catches whatever error comes
        cout << "ERROR " << x << ": son cannot be older than mom." << endl;
    }

    /*Similar to Java try/catch statements, but
    allows you to create your own errors, which is
    one of the cooler aspects of C++*/

    return 0;
}
