#include <iostream>
using namespace std;

int main() {
    int bookID[3];

    // Enter book IDs
    cout << "Enter the IDs of 3 library books:\n";
    for (int i = 0; i < 3; i++) {
        cin >> bookID[i];
    }

    // Display book IDs
    cout << "\nThe book IDs entered are:\n";
    for (int i = 0; i < 3; i++) {
        cout << bookID[i] << endl;
    }

    return 0;
}
