#include <iostream>
#include <cmath>
#include <string>

using namespace std;



class Person {   // classes are awesome it lets you define your own type of data type object
public:
    string name;
    int age = 0;
    void say_hi() {
        cout << "Hello " << name << ", Enter the details of your speaker below!" << endl; // i can even put other code inside of the class
    }
    void calculate() {

        int calc_0, calc_1;
        char oper;

        cout << "Enter first number: ";
        cin >> calc_0;
        cout << "Enter operator [ + - * / ]: ";
        cin >> oper;
        cout << "Enter second number: ";
        cin >> calc_1;

        int result = 0;
        if (oper == '+') {
            result = calc_0 + calc_1;
        }
        else if (oper == '-') {
            result = calc_0 - calc_1;
        }
        else if (oper == '*') {
            result = calc_0 * calc_1;
        }
        else if (oper == '/') {
            result = calc_0 / calc_1;
        }
        else {
            cout << "Invalid operator!" << endl;
        }
        cout << result << endl;
    }
};


struct speaker { // struct does basicaly what i used the first part of the class Person for
    string brand;
    short watts = 0;
    short size = 0;
};



int main() {

    // declaring as many types of variables as i can think of
    string text_string = "trying to use everything i have learned";
    int number_int = 142;
    short number_short = 141;
    const short number_constant = 142; // will not be changable after this point
    double number_double = 142.0;
    float number_float = 142.0;
    bool boolean = false;


    number_short++;                    // corrects nunmber_short to 142 by incrementing by +1 or -1


    int simple_array[3] = { 1, 4, 2 };
    int two_d_array[3][3]{
        {1, 4, 2},
        {1, 4, 2},
        {1, 4, 2}
    };
    /*
    multi line comment
    also these 2d arrays are great because
    they store another array inside of them
    */

    Person hackbot;             // this is a class
    hackbot.name = "hackbot";   // here i defined myself inside of this class as my name and my age  
    hackbot.age = 18;           // and i could do this for anyone or change the data types accepted
    hackbot.say_hi();           // calling on the little code in the class


    speaker senheiser;              //this is a struct it stores data exactly like the class above
    cout << "Enter speaker brand: ";
    getline(cin, senheiser.brand);      // getline for strings
    cout << "Enter speaker watts: ";
    cin >> senheiser.watts;             // cin >> for numbers
    cout << "Enter speaker size: ";
    cin >> senheiser.size;              // cin >> for numbers remember it

    cout << "Brand: " << senheiser.brand << endl << "Watts: " << senheiser.watts << endl << "Size: " << senheiser.size << endl;


    int* p_pointer = &number_int;
    cout << p_pointer << " pointer value" << endl; // pointers are the memory address of the data 

    hackbot.calculate();

    int index = 0;
    while (index != 10) {
        cout << text_string << ": " << index << endl;
        index++;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << text_string << ": " << i << endl;
    }

    return 0;
}