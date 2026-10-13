#include <iostream>
using namespace std;

int main()
{
    int book[5], temp;

    cout << "Enter 5 Book IDs: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> book[i];
    }

    // Bubble Sort
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (book[j] > book[j + 1])
            {
                temp = book[j];
                book[j] = book[j + 1];
                book[j + 1] = temp;
            }
        }
    }

    cout << "Book IDs in Ascending Order: ";
    for (int i = 0; i < 5; i++)
    {
        cout << book[i] << " ";
    }

    return 0;
}
