////////////////////////////////////////////////
// Rock, Paper, Scissors                      //
// Language: C++                              //
// Author: Jacob Waters                       //
// Github: github.com/jpwaters09              //
// Copyright (c) 2026 Jacob Waters            //
// Contact me: jpwaters09.business@gmail.com  //
////////////////////////////////////////////////

#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
using namespace this_thread;

static void clear() {
    cout << "\033[2J\033[1;1H";
}

static void sleep(int seconds) {
    sleep_for(chrono::seconds(seconds));
}

void main() {
    clear();

    int user_wins = 0;
    int computer_wins = 0;
    string options[3] = {"r", "p", "s"};

    cout << "Rock, Paper, Scissors:" << endl;
    sleep(2);
    clear();

    cout << "Press enter To Start: ";
    cin.ignore();
    clear();

    while (true) {
        string user_input;
        cout << "Type r for Rock, p for Paper, s for Scissors, v To View Results: ";
        getline(cin, user_input);

        for (char& c : user_input) {
            c = tolower(c);
        }

        if (user_input == "v") {
            clear();
            break;
        }

        if (find(begin(options), end(options), user_input) == end(options)) {
            cout << "Please Type r, p, s!" << endl;
            sleep(4);
            clear();
            continue;
        }

        srand(static_cast<unsigned int>(time(0)));

        int random_number = rand() % 3 + 0;
        
        string computer_pick = options[random_number];

        cout << endl << "Computer Picked " << computer_pick << "." << endl;

        if (user_input == computer_pick) {
            cout << endl << "It Was a Draw!" << endl;
            sleep(2);
            clear();
        }

        else if (user_input == "r" and computer_pick == "s") {
            cout << endl << "You Won!" << endl;
            user_wins++;
            sleep(2);
            clear();
        }

        else if (user_input == "p" and computer_pick == "r") {
            cout << endl << "You Won!" << endl;
            user_wins++;
            sleep(2);
            clear();
        }

        else if (user_input == "s" and computer_pick == "p") {
            cout << endl << "You Won!" << endl;
            user_wins++;
            sleep(2);
            clear();
        }

        else {
            cout << endl << "You Lost!" << endl;
            computer_wins++;
            sleep(2);
            clear();
        }
    }

    cout << "You Won " << user_wins << " Time/s." << endl;
    sleep(2);
    cout << endl << "The Computer Won " << computer_wins << " Time/s.";

    if (user_wins == computer_wins) {
        sleep(4);
        clear();
        cout << "It Was a Draw!" << endl;
        sleep(2);
        clear();
    }

    else if (user_wins > computer_wins) {
        sleep(4);
        clear();
        cout << "You Won!" << endl;
        sleep(2);
        cout << endl << "The Computer Lost!" << endl;
        sleep(4);
        clear();
    }

    else if (computer_wins > user_wins) {
        sleep(4);
        clear();
        cout << "The Computer Won!" << endl;
        sleep(4);
        cout << endl << "You Lost!" << endl;
        sleep(4);
        clear();
    }
}
