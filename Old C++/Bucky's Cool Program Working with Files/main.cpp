#include <iostream>
#include <fstream>
using namespace std;

int getChoice();
void displayItems(int x);

//main function
int main()
{
    int choice;
    choice = getChoice();

    while(choice != 4){
        switch(choice){
        case 1:
            displayItems(1);
            break;
        case 2:
            displayItems(2);
            break;
        case 3:
            displayItems(3);
            break;
        }
        choice = getChoice();
    }

    return 0;
}

//returns the choice of the user
int getChoice(){
    int choice;

    cout << "1 - just plain items" << endl;
    cout << "2 - helpful items" << endl;
    cout << "3 - harmful items" << endl;
    cout << "4 - quit program\n" << endl;

    cin >> choice;
    cout << "\n" << endl;
    return choice;
}

//displays items of choice
void displayItems(int x){
    ifstream myFile("objects.txt");
    string name;
    double power;

    if(x == 1){
        while(myFile >> name >> power){
            if(power == 0) cout << name << " " << power << endl;
        }
    }else if(x == 2){
        while(myFile >> name >> power){
            if(power > 0) cout << name << " " << power << endl;
        }
    }else if(x == 3){
        while(myFile >> name >> power){
            if(power < 0) cout << name << " " << power << endl;
        }
    }

    cout << "\n" << endl;
    myFile.close();
}
