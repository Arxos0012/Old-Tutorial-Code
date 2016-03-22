#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    /*the "ofstream" stands for: output file stream.
    To read a file you need to use, "ifstream", or:
    input file stream*/

    int id;
    string name;
    double money;

    ifstream myFile("players.txt");

    //takes data from "myFile" object
    while(myFile >> id >> name >> money){
        cout << id << " " << name << " " << money << endl;
    }
    /*this will read from the file until it reaches
    the end of the file*/

    myFile.close();

    return 0;
}
