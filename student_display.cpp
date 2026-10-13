#include <iostream>
using namespace std;

int main() {
    int roll_no[5];

    cout << "Enter the Roll No. of 5 students:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Roll Number " << (i + 1) << ":";
        cin >> roll_no[i];
    }

    cout << "\nDisplaying the entered Roll Numbers:\n";

    for (int i = 0; i < 5; i++) {
        cout << "Roll Number " << (i + 1) << ":" << roll_no[i] << "\n";
    }

    return 0;
}
