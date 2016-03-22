#include <iostream>

using namespace std;

class beta{
    public:
        beta(){
            betaVar = 0;
        }
    private:
        int betaVar;

    friend void betaFriend(beta &bobj);
    /*the "friend" keyword allows functions outside
    the class to use variable and functions in the
    class, even private variables*/
};

void betaFriend(beta &bobj){
    bobj.betaVar = 99;
    cout << bobj.betaVar << endl;
}//you only use the friend keyword within the class

int main()
{
    beta beater;
    betaFriend(beater);

    /*going to the memory address of the class allows
    you to change the object itself and not the
    copy*/
    return 0;
}
