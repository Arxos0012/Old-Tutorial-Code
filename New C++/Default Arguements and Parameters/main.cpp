#include <iostream>

using namespace std;

int volumeBox(int l=10, int w=10, int h=10){
    //if no value is entered for each parameter, the values above will be chosen
    //note that this works right to left, entering 2 values will replace the first 2 and leave the last
    return l*w*h;
}

int main()
{
    while(true){
        string choice;
        cout << "Enter \"default\" for each dimension for a default volume box."
        << "\nEnter \"custom\" for each dimension for a custom volume box: ";
        cin >> choice;
        if(choice == "default"){
            cout << "The volume of the box is: " << volumeBox() << " cubic units.";
            break;
        }else if(choice == "custom"){
            int a,b,c;
            cout << "Enter an integer length: ";
            cin >> a;
            cout << "Enter an integer width: ";
            cin >> b;
            cout << "Enter an integer height: ";
            cin >> c;
            cout << "The volume of the box is: " << volumeBox(a,b,c) << " cubic units.";
            break;
        }else cout << "Invalid input! Please try again." << endl;
    }

    return 0;
}
