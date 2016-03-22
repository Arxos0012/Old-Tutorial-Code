#include <iostream>
#include <fstream>  //this allows you to work with files
using namespace std;

int main()
{
    ofstream jbFile;    //file object represents a file
    jbFile.open("sword.jff");

    /*opens a file under the file object. If the file
    doesn't exist, it will create a file with this
    name.*/

    jbFile << "I want a better computer, but I don't need one";
    //this writes data to the file

    jbFile.close();
    //closes the file. ALWAYS CLOSE THE FILE!!!!

    return 0;
}
