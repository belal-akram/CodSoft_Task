#include <iostream>
using namespace std;
// Function for Addition of two numbers.
float add(float x, float y) {
    return x + y;
}

// Function for Subtraction of two numbers.
float subtract(float x, float y) {
    return x - y;
}

// Function for Multiplication of two numbers.
float multiply(float x, float y) {
    return x * y;
}

// Function for Division of two numbers.
float divide(float x, float y) {
    if (y == 0) {
        cout << "Cannot divide by zero" << endl;
        return 0;
    }
    return x / y;
}

int main() {
    cout << "Select operation you want to perform:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;

    char choice;
    cout << "Enter choice (1/2/3/4): ";
    cin >> choice;

    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (choice) {
        case '1':
            cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
            break;
        case '2':
            cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
            break;
        case '3':
            cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
            break;
        case '4':
            cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid input!" << endl;
    }

    return 0;
}

