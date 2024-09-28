#include <iostream>

using namespace std;

class Calculator {
public:
   
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

   
    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            cout << "\nError.";
            return 0; 
        }
        return a / b;
    }
    double modulus(int a, int b) {
        if (b == 0) {
            cout << "\nError.";
            return 0; 
        }
        return a % b;
    }
};

int main() {
    Calculator calc;
    double num1, num2;
    char operat;

    cout << "\nSimple Calculator\n";
    cout << "\nEnter first number: ";
    cin >> num1;
    cout << "\nEnter second number: ";
    cin >> num2;

    cout << "\nChoose an operation (+, -, *, /, %): ";
    cin >> operat;

    switch (operat) {
        case '+':
            cout << "\nResult: " << calc.add(num1, num2);
            break;
        case '-':
            cout << "\nResult: " << calc.subtract(num1, num2);
            break;
        case '*':
            cout << "\nResult: " << calc.multiply(num1, num2);
            break;
        case '/':
            cout << "\nResult: " << calc.divide(num1, num2);
            break;
        case '%':
            cout << "\nResult: " << calc.modulus(static_cast<int>(num1), static_cast<int>(num2));
            break;
        default:
            cout << "\nInvalid operation!";
    }

    return 0;
}

