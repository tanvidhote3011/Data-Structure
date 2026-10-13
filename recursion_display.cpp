#include<iostream>
using namespace std;

void menu()
{
    cout << "\n\n====RESTAURANT MENU====";
    cout << "\n1. Pizza";
    cout << "\n2. Burger";
    cout << "\n3. Pasta";
    cout << "\n4. Exit";
}

int main()
{
    int choice;

    do
    {
        menu();

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "You Selected Pizza.";
        }
        else if(choice == 2)
        {
            cout << "You Selected Burger.";
        }
        else if(choice == 3)
        {
            cout << "You Selected Pasta.";
        }
        else if(choice == 4)
        {
            cout << "Thank You!";
        }
        else
        {
            cout << "\nInvalid Choice!";
        }

    } while(choice != 4);

    return 0;
}
