#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int main() {
    int num1, num2;
    char oper;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> oper;
    cout << "Enter second number: ";
    cin >> num2;
    int result{};

    if (oper == '+') {      // used if statements to check the operator
        result = num1 + num2;
    }
    else if (oper == '-') {
        result = num1 - num2;
    }
    else if (oper == '/') {
        result = num1 / num2;
    }
    else if (oper == '*') {
        result = num1 * num2;
    }
    else {
        cout << "Oops something wasent compatible";
    }
    cout << result;

    return 0;
}