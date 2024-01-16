#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    // Get user input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Get the operation to perform
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    // Perform the selected operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout<< "hii";
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check if the second number is not zero before division
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;  // Exit with an error code
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 1;  // Exit with an error code
    }

    // Display the result
  
    cout << "Result: " << result << endl;
    system("pause");
    return 0;  // Exit successfully
}
