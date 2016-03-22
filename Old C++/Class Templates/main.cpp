#include <iostream>
using namespace std;

template <class N>

class jabari{
    N first, second;
    public:
        jabari(N a, N b){
            first = a;
            second = b;
        }

        N bigger();
};

template <class N>

N jabari<N>::bigger(){
    return (first>second ? first:second);
}

int main()
{
    jabari <int>j(20, 39);
    cout << j.bigger() << endl;
    return 0;
}
