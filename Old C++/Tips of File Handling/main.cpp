#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream jbFile("sword.txt");
    /*this is a different way of creating a file
    object and associating it with a file, on the
    same line*/

/****************************************************/

    /*checks to see if the file is open, this is good
    to do to save time for debugging and errors*/
    if(jbFile.is_open()){
        cout << "File is currently open" << endl;
    }else{
        cout << "ERROR: file issue" << endl;
    }

    jbFile << "Programming may be the new common occupation";

    jbFile.close();

    return 0;
}
