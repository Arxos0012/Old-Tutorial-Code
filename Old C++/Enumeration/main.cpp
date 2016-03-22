#include <iostream>
using namespace std;

int main()
{
    enum Room {GUITAR, COMPUTER, GAME, TV, POSTER};

    string choice;

    cout << "Choose an item from the room (GUITAR, COMPUTER, GAME, TV, POSTER): ";
    cin >> choice;

    switch((Room)choice){
        case GUITAR:
            cout << "It's an electric guitar. The amp is small, but otherwise looks good." << endl;
            break;
    }

    return 0;
}
