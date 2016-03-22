#include <iostream>

using namespace std;

int volume(int l=1 ,int w=1, int h=1);

int main()
{
    /*if not all the parameters are filled,
    the computer will use the defualt value that
    parameter is set to

    it does this by setting values from left to
    right. so l = 5, w = 6 but h still equals 1*/

    cout << volume(5,6);
    return 0;
}

int volume(int l, int w, int h){
    return l*w*h;
}
