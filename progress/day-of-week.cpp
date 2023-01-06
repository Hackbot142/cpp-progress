#include <iostream>
#include <cmath>
#include <string>

using namespace std;


string day_of_week(int day_number) {
    string day;
    switch (day_number) {
    case 1:
        day = "Sunday";
        break;
    case 2:
        day = "Monday";
        break;
    case 3:
        day = "Tuesday";
        break;
    case 4:
        day = "Wednesday";
        break;
    case 5:
        day = "Thursday";
        break;
    case 6:
        day = "Friday";
        break;
    case 7:
        day = "Saturday";
        break;
    default: 
        day = "Invalid number!";
    }

    return day;
}


int main() {
    int day;
    cout << "Enter the day of the week 1-7: ";
    cin >> day;
    cout << "it is " << day_of_week(day) << "!";

    return 0;
}