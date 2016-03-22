#include <iostream>

using namespace std;

int main()
{
    //Now time for some demonstrations of mathematics!

    int a, b;

     cout << "Welcome to a basic calcuator!" << endl;
     cout << "Enter an integer: ";
     cin >> a;
     cout << "Enter another integer: ";
     cin >> b;

     cout << "This the sum of the numbers: "<< a << "+" << b << "=" << a+b << "." <<endl;
     cout << "This the difference of the numbers: "<< a << "-" << b << "=" << a-b << "." <<endl;
     cout << "This the product of the numbers: "<< a << "*" << b << "=" << a*b << "." <<endl;
     cout << "This the quotient of the numbers: "<< a << "/" << b << "=" << a/b << "." <<endl;
     cout << "This the remainder of the numbers: "<< a << "%" << b << "=" << a%b << "." <<endl;

    return 0;
}
