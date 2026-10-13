#include <iostream>
using namespace std;

int main() {
    int marks[5];

    // Input marks for 5 students
    cout << "Enter marks for 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Sort the array in descending order using Bubble Sort
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (marks[j] < marks[j + 1]) {
                // Swap the elements
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    // Display the marks from highest to lowest
    cout << "\nMarks from highest to lowest:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Rank " << i + 1 << ": " << marks[i] << endl;
    }

    return 0;
}
