#include<iostream>
using namespace std;

int main() {
    int queue[100];
    int front = 0, rear = -1;
    int choice;
    int token = 1;

    do {
        cout << "\n===== BANK TOKEN SYSTEM =====\n";
        cout << "1. Issue Token\n";
        cout << "2. Display All Tokens\n";
        cout << "3. Serve Customer\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                if(rear < 99) {
                    queue[++rear] = token;
                    cout << "Token issued: " << token << endl;
                    token++;
                }
                else {
                    cout << "Queue is full!\n";
                }
                break;

            case 2:
                if(front > rear) {
                    cout << "No tokens available.\n";
                }
                else {
                    cout << "Tokens in Queue:\n";
                    for(int i = front; i <= rear; i++) {
                        cout << queue[i] << endl;
                    }
                }
                break;

            case 3:
                if(front > rear) {
                    cout << "No customers to serve.\n";
                }
                else {
                    cout << "Serving Customer with Token: "
                         << queue[front] << endl;
                    front++;
                }
                break;

            case 4:
                cout << "Exiting Bank Token System.\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 4);

    return 0;
}
