#include <iostream>

using namespace std;

double celsius_to_fahrenheit(double c) {
  return (c * 9.0 / 5.0) + 32.0;
}

double fahrenheit_to_celsius(double f) {
  return (f - 32.0) * 5.0 / 9.0;
}

int main() {
  double c, f;
  cin >> c >> f;
  cout << celsius_to_fahrenheit(c) << endl;
  cout << fahrenheit_to_celsius(f) << endl;
  return 0;
}
