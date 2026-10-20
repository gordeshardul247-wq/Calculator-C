#include <iostream>
using namespace std;

int main() {
    double a, b;     // the two numbers
    char op;         // the operation: + - * /
    char again;      // to ask if the user wants to continue

    do {
        // 1. Take input from the user
        cout << "Enter first number: ";
        cin >> a;

        cout << "Enter operation (+, -, *, /): ";
        cin >> op;

        cout << "Enter second number: ";
        cin >> b;

        // 2. Do the math using switch
        switch (op) {
            case '+':
                cout << "Result: " << a + b << endl;
                break;
            case '-':
                cout << "Result: " << a - b << endl;
                break;
            case '*':
                cout << "Result: " << a * b << endl;
                break;
            case '/':
                if (b == 0)
                    cout << "Error: cannot divide by zero" << endl;
                else
                    cout << "Result: " << a / b << endl;
                break;
            default:
                cout << "Error: invalid operation" << endl;
        }

        // 3. Ask if the user wants to calculate again
        cout << "Calculate again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "Goodbye!" << endl;
    return 0;
}
