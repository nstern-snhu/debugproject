/*
 * Calculator.cpp
 *
 *  Date: 3-17-2024
 *  Author: Nick Stern
 */

#include <iostream>
using namespace std;

int main() { //corrected from void main
    char statement[100];
    double op1, op2;
    char operation;
    char answer = 'Y';
    while (answer == 'Y' || answer == 'y') {
        cout << "Enter expression: ";
        cin >> op1 >> operation >> op2;
        switch (operation) { //changed to switch case 
        case '+':
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
            break;
        case '-':
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
            break;
        case '*':
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
            break;
        case '/':
            if (op2 == 0) {
                cout << "Division by zero is undefined." << endl;
            }
            else {
                cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
            }
            break;
        default:
            cout << "This is not supported by the calculator" << endl; //added handler for unsupported calculator funcations
        }

        cout << "Do you want to calculate again (Y/N): ";
        cin >> answer;
    }
    cout << "Program Finished." << endl;
    return 0;
}
