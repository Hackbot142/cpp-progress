#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Speakers {
    public:
        string brand;
        double watts;
        double size;
        Speakers(string a_brand, double a_watts, double a_size) {
            brand = a_brand;
            watts = a_watts;
            size = a_size;
        }
};

int main () {
    Speakers speaker1("JBL", 400.6, 12);

    cout << speaker1.brand << endl << speaker1.watts << endl << speaker1.size;

    return 0;
}