#include <iostream>

using namespace std;

/*Now time for some functions!!!*/

void prototype();
/*This is called prototyping. This is done when you want to
write functions under the different function it is called in.*/

//Remember that functions have parameters where variables can be entered

void print(){
    cout << "This was printed with a function!" << endl;
}
//a normal function written above the different function it is used in

int add(int x, int y){
    return x+y;
}

/*A function that take two integers as inputs and returns the sum using
the keyword "return". Can be stored as a variable.*/

int main()
{
    print();
    prototype();
    cout << "Here is the sum of 5+4: " << add(5,4) << "." << endl;
    return 0;
}

void prototype(){
    cout << "This was printed from a function with a prototype!" << endl;
}
//You see that the actual code is under the main function, where it is called
