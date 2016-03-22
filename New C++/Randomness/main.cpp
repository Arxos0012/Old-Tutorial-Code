#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    string choice = "Y";

    srand(time(0));     //uses a number for seed for the generator
                        //time(0) counts the number of seconds since a time in the past, change the seed each time

    while(choice == "Y"){
        cout << "I will now generate 25 random numbers!" << endl;

        for(int i=0; i<25; i++){
            cout << "Number " << i << ": " <<rand() << endl;
        }
        cout << "\nEnter \"Y\" if you which to generate another set. Otherwise enter anything else: ";
        cin >>choice;
    }

    return 0;
}
