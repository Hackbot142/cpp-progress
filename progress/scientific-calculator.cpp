#include <iostream>
#include <cmath>

using namespace std;

int main() {
  while (true) {
    cout << "Enter an operator (+, -, *, /, ^, sqrt, exit): ";
    char op;
    cin >> op;

    if (op == 'exit') {
      break;
    }

    cout << "Enter two numbers: ";
    double x, y;
    cin >> x >> y;

    switch (op) {
      case '+':
        cout << x << " + " << y << " = " << x + y << endl;
        break;
      case '-':
        cout << x << " - " << y << " = " << x - y << endl;
        break;
      case '*':
        cout << x << " * " << y << " = " << x * y << endl;
        break;
      case '/':
        cout << x << " / " << y << " = " << x / y << endl;
        break;
      case '^':
        cout << x << " ^ " << y << " = " << pow(x, y) << endl;
        break;
      case 'sqrt':
        cout << "sqrt(" << x << ") = " << sqrt(x) << endl;
        break;
      default:
        cout << "Invalid operator" << endl;
    }
  }

  return 0;
}
