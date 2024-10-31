////////////////////////////////////////////////
// Computer Quiz                              //
// Language: C++                              //
// Author: Jacob Waters                       //
// Github: github.com/jpwaters09              //
// Copyright (c) 2024 Jacob Waters            //
// Contact me: jpwaters.github@gmail.com      //
////////////////////////////////////////////////

#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;

void clear() {
  cout << "\033[2J\033[1;1H";
}

int main() {
  clear();
  cout << "Computer Quiz:" << endl;
  sleep(2);
  clear();

  cout << "Press enter To Start: ";
  cin.ignore();
  clear();

  int score = 0;

  cout << "Question 1!" << endl;
  sleep(4);
  clear();

  string answer;
  cout << "What Does CPU Stand For? ";
  getline(cin, answer);

  for (char &c : answer) {
      c = tolower(c);
  }

  clear();

  if (answer == "central processing unit") {
    score++;
    cout << "Correct!" << endl;
    cout << endl << "You Have Got " << score << "/4 Questions Correct So Far!" << endl;
    sleep(4);
  }
  else {
    cout << "Incorrect" << endl;
    cout << endl << "You Have Got " << score << "/4 Questions Correct So Far!" << endl;
    sleep(4);
  }

  clear();
  cout << "Question 2!" << endl;
  sleep(4);
  clear();

  cout << "What Does GPU Stand For? ";
  getline(cin, answer);

  for (char &c : answer) {
    c = tolower(c);
  }

  clear();

  if (answer == "graphics processing unit") {
    score++;
    cout << "Correct!" << endl;
    cout << endl << "You Have Got " << score << "/4 Questions Correct So Far!" << endl;
    sleep(4);
  }
  else {
    cout << "Incorrect" << endl;
    cout << endl << "You Have Got " << score << "/4 Questions Correct So Far!" << endl;
    sleep(4);
  }

  clear();
  cout << "Question 3!" << endl;
  sleep(4);
  clear();

  cout << "What Does RAM Stand For? ";
  getline(cin, answer);

  for (char &c : answer) {
    c = tolower(c);
  }

  clear();

  if (answer == "random access memory") {
    score++;
    cout << "Correct!" << endl;
    cout << endl << "You Have Got " << score << "/4 Questions Correct So Far!" << endl;
    sleep(4);
  }
  else {
    cout << "Incorrect" << endl;
    cout << endl << "You Have Got " << score << "/4 Questions Correct So Far!" << endl;
    sleep(4);
  }

  clear();
  cout << "Question 4!" << endl;
  sleep(4);
  clear();

  cout << "What Does PSU Stand For? ";
  getline(cin, answer);

  for (char &c : answer) {
    c = tolower(c);
  }

  clear();

  if (answer == "power supply unit") {
    score++;
    cout << "Correct!" << endl;
    cout << endl << "You Have Got " << score << "/4 Questions Correct So Far!" << endl;
    sleep(4);
  }
  else {
    cout << "Incorrect" << endl;
    cout << endl << "You Have Got " << score << "/4 Questions Correct So Far!" << endl;
    sleep(4);
  }

  clear();
  cout << "End Of Computer Quiz!" << endl;
  sleep(4);
  cout << endl << "You Have Got " << score << "/4 Questions Correct!" << endl;
  sleep(1);

  if (score == 4) {
    clear();
    cout << "You Have Got 100%!" << endl;
    sleep(1);
    cout << endl << "You Won!" << endl;
    sleep(2);
    clear();
  }
  else {
    clear();
    cout << "Please Try The Computer Quiz Again!" << endl;
    sleep(1);
    cout << endl << "You Lost!" << endl;
    sleep(2);
    clear();
  }
}
