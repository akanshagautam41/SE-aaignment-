#include <iostream>
using namespace std;

// Function Overloading for addition
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

// Function Overloading for subtraction
int subtract(int a, int b) {
    return a - b;
}

double subtract(double a, double b) {
    return a - b;
}

// Function Overloading for multiplication
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

// Function Overloading for division
int divide(int a, int b) {
    return a / b;
}

double divide(double a, double b) {
    return a / b;
}

int main() {
    int num1 = 10, num2 = 5;
    double num3 = 10.5, num4 = 2.5;

    // Integer addition
    cout << "Integer Addition: " << add(num1, num2) << endl;

    // Double addition
    cout << "Double Addition: " << add(num3, num4) << endl;

    // Integer subtraction
    cout << "Integer Subtraction: " << subtract(num1, num2) << endl;

    // Double subtraction
    cout << "Double Subtraction: " << subtract(num3, num4) << endl;

    // Integer multiplication
    cout << "Integer Multiplication: " << multiply(num1, num2) << endl;

    // Double multiplication
    cout << "Double Multiplication: " << multiply(num3, num4) << endl;

    // Integer division
    cout << "Integer Division: " << divide(num1, num2) << endl;

    // Double division
    cout << "Double Division: " << divide(num3, num4) << endl;

    return 0;
}
