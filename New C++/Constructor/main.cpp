#include <iostream>

using namespace std;

class SampleClass{
public:
    //when an object of this class is created, the constructor below with executes instantly
    //like other functions, the constructor can take in inputs, but this means that a parameter
    //is required every time an object of this class is created
    SampleClass(string z){
        cout << "The class object has created! This is the constructor speaking!" << endl;
        setName(z);
    }
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
private:
    string name;
};

int main()
{
    SampleClass sampleClass("Jabari");
    cout << "The name of this class object is: " << sampleClass.getName() << "!" << endl;
    return 0;
}
