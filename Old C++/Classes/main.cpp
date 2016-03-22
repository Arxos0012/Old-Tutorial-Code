#include <iostream>
using namespace std;

class JBClass{
    private:
        string name;
    public:
        //CONSTRUCTOR
        JBClass(){
            cout << "This will print automatically" << endl;
        }

        void alpha(){
            cout << "This is the alpha method of JBClass" << endl;
        }

        void setName(string choice){
            name = choice;
        }

        string getName(){
            return name;
        }
};

int main()
{
    JBClass jbObject;

    jbObject.alpha();
    jbObject.setName("Jabari Booker");
    cout << jbObject.getName() << endl;

    return 0;
}
