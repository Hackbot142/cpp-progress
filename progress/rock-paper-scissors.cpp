#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr));

    cout << "I challenge you to Rock, Paper, Scissors!\n";

    while (true)
    {
        cout << "Enter 1 for rock, 2 for paper, or 3 for scissors: ";
        int choice;
        cin >> choice;

        int computer_choice = rand() % 3 + 1;

        if (choice == computer_choice)
        {
            cout << "It's a tie!\n";
        }
        else if (choice == 1 && computer_choice == 2)
        {
            cout << "Paper beats rock. You lose.\n";
        }
        else if (choice == 1 && computer_choice == 3)
        {
            cout << "Rock beats scissors. You win!\n";
        }
        else if (choice == 2 && computer_choice == 1)
        {
            cout << "Paper beats rock. You win!\n";
        }
        else if (choice == 2 && computer_choice == 3)
        {
            cout << "Scissors beat paper. You lose.\n";
        }
        else if (choice == 3 && computer_choice == 1)
        {
            cout << "Rock beats scissors. You lose.\n";
        }
        else if (choice == 3 && computer_choice == 2)
        {
            cout << "Scissors beat paper. You win!\n";
        }
    }

    return 0;
}