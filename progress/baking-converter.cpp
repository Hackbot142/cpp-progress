#include <iostream>
#include <string>
using namespace std;

int main() {
    double value;
    string unit;

    cout << "Enter a value: ";
    cin >> value;
    cout << "Enter a unit (cups, tablespoons, teaspoons, ounces, or degrees Fahrenheit): ";
    cin >> unit;

    if (unit == "cups") {
        double grams = value * 236.588;
        double milliliters = value * 236.588;
        cout << value << " cups is equivalent to " << grams << " grams and " << milliliters << " milliliters." << endl;
    } else if (unit == "tablespoons") {
        double grams = value * 14.7868;
        double milliliters = value * 14.7868;
        cout << value << " tablespoons is equivalent to " << grams << " grams and " << milliliters << " milliliters." << endl;
    } else if (unit == "teaspoons") {
        double grams = value * 4.92892;
        double milliliters = value * 4.92892;
        cout << value << " teaspoons is equivalent to " << grams << " grams and " << milliliters << " milliliters." << endl;
    } else if (unit == "ounces") {
        double grams = value * 28.3495;
        double milliliters = value * 29.5735;
        cout << value << " ounces is equivalent to " << grams << " grams and " << milliliters << " milliliters." << endl;
    } else if (unit == "degrees Fahrenheit") {
        double celsius = (value - 32) * (5.0/9.0);
        cout << value << " degrees Fahrenheit is equivalent to " << celsius << " degrees Celsius." << endl;
    } else {
        cout << "Invalid unit." << endl;
    }

    return 0;
}
