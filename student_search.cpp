#include <iostream>
using namespace std;

int main() {

    int rollNumbers[5];
    int searchRollnumbers;
    bool found = false;

    cout << "Enter the Roll Numbers of 5 Students" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> rollNumbers[i];
    }

    cout << "\nEnter the Roll Number you want to search: ";
    cin >> searchRollnumbers;

    for (int i = 0; i < 5; i++) {
        if (rollNumbers[i] == searchRollnumbers) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Student Found" << endl;
    } 
    else {
        cout << "Student Not Found" << endl;
    }

    return 0;
}
