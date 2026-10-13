#include<iostream>
using namespace std;

int main() {
    int stack[5];
    int top = -1;

cout<<"Enter 5 Customer Token Numbers:\n";
    for(int i=0; i<5; i++) {
        cin>>stack[++top];
    }

    cout<<"\nCustomer Service History:\n";

    while(top>=0)
        {
            cout<<"Customer Served:"<<stack[top]<<endl;
            top--;
        }
    return 0;
}
