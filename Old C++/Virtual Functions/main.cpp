#include <iostream>
using namespace std;

class Enemy{
    public:
        virtual void attack(){}
        /*the virtual keyword allows derived classes
        to over write functions. Good for classes
        with similar functions with some variation*/
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
    /*because the attack function is in the Enemy
    class we can call it from the pointer of that
    class*/

    return 0;
}
