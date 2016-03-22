#include <iostream>

using namespace std;

void printNumber(int x);
void printNumber(float x);
/*You see that the the two functions are named the same but take
different inputs. This allow you to use the same function name to
do things that are relatively similar but take differing inputs.
This is called function overloading.*/

int main()
{
    int a = 54;
    float b = 32.34344;

    printNumber(a);
    printNumber(b);

    return 0;
}

void printNumber(int x){
    cout << "This is the integer: " << x << endl;
}

void printNumber(float x){
    cout << "This is the float: " << x << endl;
    }
