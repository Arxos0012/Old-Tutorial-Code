#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int idNumber;
    string name;
    double money;

    ofstream myFile("players.txt");

    cout << "Enter players ID, Name, and Money\n";
    cout << "Format: 1 James 43.56\n" << endl;
    cout << "press Ctrl+Z to quit\n" << endl;
    /*If you enter "Control + Z" while in the command
    prompt, you end an input loop like the one below*/


    /*This loops to take in the idNumber, name, and
    money repeatedly. Make sure that you type in the
    same format as below.*/
    while(cin >> idNumber >> name >> money){
        myFile << idNumber << " " << name << " " << money << endl;
    }

    myFile.close();

    return 0;
}
