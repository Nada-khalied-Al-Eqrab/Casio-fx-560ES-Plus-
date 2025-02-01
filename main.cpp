#include <iostream>
#include <cmath>
#include <iomanip>
#include <bitset>
#include <string>
#include <sstream>
#include <map>
using namespace std;

// Function to display the calculator interface
void displayInterface() {
    cout << "\n=====================================\n";
    cout << "     Casio fx-560ES Plus Simulator\n";
    cout << "=====================================\n";
    cout << "| [1] Add (+)           [8] tan(x)  |\n";
    cout << "| [2] Subtract (-)      [9] Convert |\n";
    cout << "| [3] Multiply (*)     [10] Save Var|\n";
    cout << "| [4] Divide (/)       [11] Recall  |\n";
    cout << "| [5] Power (x^y)      [12] Last Eq |\n";
    cout << "| [6] Square Root      [13] Show Eq |\n";
    cout << "| [7] sin(x)/cos(x)    [14] Exit    |\n";
    cout << "=====================================\n";
}

// Function to convert between number systems
void convertNumberSystem() {
    int number, choice;
    cout << "Enter a decimal number: ";
    cin >> number;
    cout << "Choose conversion system:\n1. Binary\n2. Octal\n3. Hexadecimal\n";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Binary: " << bitset<32>(number) << endl;
        break;
    case 2:
        cout << oct << "Octal: " << number << dec << endl;
        break;
    case 3:
        cout << hex << "Hexadecimal: " << number << dec << endl;
        break;
    default:
        cout << "Invalid option.\n";
        break;
    }
}

// Function to save and retrieve variables
void saveAndRetrieveVariables(map<string, double>& variables) {
    int choice;
    cout << "1. Save a variable\n2. Retrieve a variable\n";
    cin >> choice;

    if (choice == 1) {
        string varName;
        double value;
        cout << "Enter variable name: ";
        cin >> varName;
        cout << "Enter value: ";
        cin >> value;
        variables[varName] = value;
        cout << "Variable " << varName << " saved with value " << value << endl;
    } else if (choice == 2) {
        string varName;
        cout << "Enter variable name: ";
        cin >> varName;
        if (variables.find(varName) != variables.end()) {
            cout << "Value of " << varName << " is: " << variables[varName] << endl;
        } else {
            cout << "Variable not found.\n";
        }
    } else {
        cout << "Invalid option.\n";
    }
}

// Main calculator logic
void calculator() {
    int choice;
    double num1, num2;
    string lastEquation;
    map<string, double> variables; // Store variables

    while (true) {
        displayInterface();
        cout << "Select an operation: ";
        cin >> choice;

        if (choice == 14) {
            cout << "Thank you for using the calculator!\n";
            break;
        }

        stringstream equationStream;

        switch (choice) {
        case 1: // Addition
            cout << "Enter two numbers (space-separated): ";
            cin >> num1 >> num2;
            equationStream << num1 << " + " << num2 << " = " << (num1 + num2);
            cout << "Result: " << equationStream.str() << endl;
            lastEquation = equationStream.str();
            break;

        case 2: // Subtraction
            cout << "Enter two numbers (space-separated): ";
            cin >> num1 >> num2;
            equationStream << num1 << " - " << num2 << " = " << (num1 - num2);
            cout << "Result: " << equationStream.str() << endl;
            lastEquation = equationStream.str();
            break;

        case 3: // Multiplication
            cout << "Enter two numbers (space-separated): ";
            cin >> num1 >> num2;
            equationStream << num1 << " * " << num2 << " = " << (num1 * num2);
            cout << "Result: " << equationStream.str() << endl;
            lastEquation = equationStream.str();
            break;

        case 4: // Division
            cout << "Enter two numbers (space-separated): ";
            cin >> num1 >> num2;
            if (num2 != 0) {
                equationStream << num1 << " / " << num2 << " = " << (num1 / num2);
                cout << "Result: " << equationStream.str() << endl;
                lastEquation = equationStream.str();
            } else {
                cout << "Error: Division by zero is not allowed!\n";
            }
            break;

        case 5: // Power
            cout << "Enter base and exponent: ";
            cin >> num1 >> num2;
            equationStream << num1 << "^" << num2 << " = " << pow(num1, num2);
            cout << "Result: " << equationStream.str() << endl;
            lastEquation = equationStream.str();
            break;

        case 6: // Square root
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 >= 0) {
                equationStream << "sqrt(" << num1 << ") = " << sqrt(num1);
                cout << "Result: " << equationStream.str() << endl;
                lastEquation = equationStream.str();
            } else {
                cout << "Error: Square root of a negative number is not defined!\n";
            }
            break;

        case 7: // Sine and Cosine
            cout << "Enter an angle (in radians): ";
            cin >> num1;
            equationStream << "sin(" << num1 << ") = " << sin(num1)
                           << ", cos(" << num1 << ") = " << cos(num1);
            cout << "Result: " << equationStream.str() << endl;
            lastEquation = equationStream.str();
            break;

        case 9: // Number system conversion
            convertNumberSystem();
            break;

        case 10: // Save variable
            saveAndRetrieveVariables(variables);
            break;

        case 12: // Save last equation
            if (!lastEquation.empty()) {
                cout << "Last equation saved: " << lastEquation << endl;
            } else {
                cout << "No equation to save.\n";
            }
            break;

        case 13: // Show last equation
            if (!lastEquation.empty()) {
                cout << "Last equation: " << lastEquation << endl;
            } else {
                cout << "No equation to show.\n";
            }
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    }
}

int main() {
    cout << fixed << setprecision(6); // Format output to 6 decimal places
    calculator();
    return 0;
}
