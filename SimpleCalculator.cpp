#include <iostream>
using namespace std;

int main() {
    cout << "--Simple Calculator--"<<endl;   //title of the program
    cout << " "<<endl;   //space separation between title and input
    
    //request user input for first number
    int num1;
    cout << "Enter 1st Number: ";
    cin >> num1;
    
    //request user input for second number
    int num2;
    cout << "Enter 2nd Number: ";
    cin >> num2;
    
    cout << " "<<endl;
    
//allow user to choose the operation
    //list operation options
    cout<<"Option 1. Addition"<<endl;
    cout<<"Option 2. Subtract 2nd Number from 1st"<<endl;
    cout<<"Option 3. Subtract 1st Number from 1st"<<endl;
    cout<<"Option 4. Multiplication"<<endl;
    cout<<"Option 5. Divide 1st Number by 2nd"<<endl;
    cout<<"Option 6. Divide 2nd Number by 1st"<<endl;
    
    cout << " "<<endl;
    
    //request user input for operation decision
    int operation;
    cout<<"Option #: ";
    cin >> operation;
    
    int sum = num1+num2;
    int difference = num1-num2;
    int difference2 = num2-num1;
    int product = num1*num2;
    int quotient = num1 / num2;
    int quotient2 = num2 / num1;
    
    switch(operation) {
        case 1:
            cout <<num1 << "+" << num2 << "=" <<sum<<endl;
            break;
        case 2:
            cout <<num1<<"-"<<num2<<"="<<difference<<endl;
            break;
        case 3:
            cout <<num2<<"-"<<num1<<"="<<difference2<<endl;
            break;
        case 4:
            cout <<num1<<"*"<<num2<<"="<<product<<endl;
            break;
        case 5:
            cout <<num1<<"/"<<num2<<"="<<quotient<<endl;
            break;
        case 6:
            cout <<num2<<"/"<<num1<<"="<<quotient2<<endl;
            break;
        default:
            cout << "Invalid";
        }
}
