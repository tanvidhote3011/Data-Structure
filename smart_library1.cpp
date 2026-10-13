#include <iostream>
using namespace std;

int main()
{
    int bookID[3];

    // Taking book IDs from user
    cout << "Enter IDs of 3 library books:" << endl;

    for (int i = 0; i < 3; i++)
    {
        cin >> bookID[i];
    }

    // Displaying book IDs
    cout << "\nBook IDs entered by the user are:" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << bookID[i] << endl;
    }

    return 0;
}
