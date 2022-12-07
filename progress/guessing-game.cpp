#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int main() {
    int secret_number = 142;
    int guess{};
    int guess_count = 0;
    int guess_limit = 3;
    bool lost_game = false;
    
    while (secret_number != guess && !lost_game) {
        if (guess_count < guess_limit) {
            cout << "Whats my favorite number: ";
            cin >> guess;
            guess_count++;
        }  
        else
        {
            lost_game = true;
        }
    }
    if (lost_game == true) {
        cout << "You lost the game!";
    }
    else
    {
        cout << "You win!";
    }

    return 0;
}