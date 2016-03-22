#include <iostream>

using namespace std;

void printArray(string theArray[], int sizeOfArray);

int main()
{
    string jabari[3] = {"circuits", "wire", "motherboard"};
    printArray(jabari, 3);
    return 0;
}

/*unlike Java, there is no keyword to get the length
of an array*/

void printArray(string theArray[], int sizeOfArray){
    for(int x=0; x<sizeOfArray; x++){
        cout << theArray[x] << endl;
    }
}
