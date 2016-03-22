#include <iostream>

using namespace std;

template <class T>
class beta{
    public:
        beta(T x){
            cout << x << " is not a character." <<endl;
        }
};
/*This template class will take in any variable of
any type*/

template<>
class beta<char>{
    public:
        beta(char x){
            cout << x << " is a character." <<endl;
        }
};
/*When you have a class with the same name, but has
an empty template that takes in a certain data type,
when that data type is entered into the parameters,
this specific class is called.*/


int main()
{
    beta<int> obj1(7);
    beta<double> obj2(3.14);
    beta<char> obj3('a');

    return 0;
}
