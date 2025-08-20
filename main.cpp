#include <iostream>
using namespace std;

int main() {
    int options;
    bool running = true;

    while (running) {
        cout << "\n===== Simple Calculator =====\n";
        cout << "(1) Addition\n";
        cout << "(2) Subtraction\n";
        cout << "(3) Multiplication\n";
        cout << "(4) Division\n";
        cout << "(0) Exit\n";
        cout << "Select an Option (0 - 4): ";
        cin >> options;

        switch(options) {
            case 1: {
                int a, b;
                cout << "Enter the First Number: ";
                cin >> a;
                cout << "Enter the Second Number: ";
                cin >> b;
                cout << "Result: " << (a + b) << endl;
                break;
            }
            case 2: {
                int a, b;
                cout << "Enter the First Number: ";
                cin >> a;
                cout << "Enter the Second Number: ";
                cin >> b;
                cout << "Result: " << (a - b) << endl;
                break;
            }
            case 3: {
                int a, b;
                cout << "Enter the First Number: ";
                cin >> a;
                cout << "Enter the Second Number: ";
                cin >> b;
                cout << "Result: " << (a * b) << endl;
                break;
            }
            case 4: {
                int a, b;
                cout << "Enter the First Number: ";
                cin >> a;
                cout << "Enter the Second Number: ";
                cin >> b;
                if (b != 0) {
                    cout << "Result: " << ((double)a / b) << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            }
            case 0:
                cout << "Get the fuck out" << endl;
                running = false;  // stop the loop
                break;

            default:
                cout << "Invalid option! Try again.\n";
        }
    }

    return 0;
}