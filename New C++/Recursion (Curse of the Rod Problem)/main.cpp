#include <iostream>

using namespace std;

int factorial(int n){
    if(n == 1) return 1;
    return n*factorial(n-1);
    //pain and suffering....
}

int main()
{
    int num;
    cout << "Enter a number for a factorial: ";
    cin >> num;
    cout << num << "! is equal to " << factorial(num);
    return 0;
}
