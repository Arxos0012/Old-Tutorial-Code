#include <iostream>

using namespace std;

/*This demonstrates the structure of classes!
Classes can hold variables and functions of their own!*/

class SampleClass{
public:     //everything here can be access outside of the class
    void coolSaying(){
        cout << "Preaching to the choir!" << endl;
    }
};


class OtherClass{
public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
private:    //everything here can only be access inside the class
    string Name;

};

int main()
{
    SampleClass sampleObject;   //An object of type "SampleClass" representing the class
    sampleObject.coolSaying();  //how you access variable and functions within the class (using ".")

    string name;

    OtherClass otherClass;
    cout << "By the way, what is your name?: ";
    cin >> name;
    otherClass.setName(name);
    cout << "Nice to meet you " << otherClass.getName() << "!!!" << endl;

    return 0;
}
