#include <iostream>

using namespace std;

int factorial(int x);

int main()
{
    cout << factorial(5) << endl;
    return 0;
}

int factorial(int x){
    if(x==1){
        return 1;
    }else{
        return x*factorial(x-1);
        /*this recursive statement
        will try to solve what x*factorial(x-1) is
        until it reaches one*/
        //
    }
}
