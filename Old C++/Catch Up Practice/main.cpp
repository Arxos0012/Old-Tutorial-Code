#include <iostream>

using namespace std;

string list;
int counter = 0;

void groceryList(string name);

int main(){
    int i=0;
    string item, choice;
    cout << "What do you need from the grocery store? (enter 'Done' to finish)" << endl;
    while(i == 0){
        cin >> item;
        if(item == "Done"){
            break;
        }else{
            groceryList(item);
        }
    }
    cout << "Okay, go get: " + list + "."<< endl;
    return 0;
}

void groceryList(string name){
    if(counter == 0){
        list += name;
        counter++;
    }else{
        list += ", " + name;
    }
}
