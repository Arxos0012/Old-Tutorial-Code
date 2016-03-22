#include <iostream>
using namespace std;

class Enemy{
/*this is an abstract class because it has a pure
virtual function. That is simply what an abstract
class is. (C++ is actually simple for once:D)*/

    public:
        virtual void attack()=0;
        //this is a pure virtual function

/*when a class has a pure virtual function
and other classes inherit from it, those
derived classes must overwrite that function
similar to Interfaces in Java.*/
};

class Ninja: public Enemy{
    public:
        void attack(){
            cout << "Stealth Attack!" << endl;
        }
};

class Monster: public Enemy{
    public:
        void attack(){
            cout << "Devour!" << endl;
        }
};

int main()
{
    Ninja n;
    Monster m;

    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;

    enemy1->attack();
    enemy2->attack();

    /*you need to use pointers to point to the
    specific memory location of derived classes.
    It is not like Java in this way.*/

    return 0;
}
