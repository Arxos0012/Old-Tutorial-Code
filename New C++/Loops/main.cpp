#include <iostream>

using namespace std;

int main()
{
    //Basic while loop
    int var = 0;
    while(var<=5){
        cout << "Count is: " << var << endl;
        var++;
    }
    cout << "\n";

    //Basic for loop
    for(int i=0; i<var; i++){   //By this point in the code var should equal 5
        cout << "5*" << i << " is: " << 5*i << endl;
    }
    cout << "\n";

    //Basic do/while loop
    int newVar = 1;
    do{                 //in this kind of loop the code is executed before the check is made
        cout << newVar;
        newVar *= 5;
        cout << " to " << newVar << endl;
    }while(newVar <= 675);

    return 0;
}
