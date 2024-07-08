// Maya Thompson
// CS 1, Section# 0107
// Assignment #4, Problem #2
// Summary: This program creates a rock, paper, scissors game between the user and a computer (randomized picks)

#include <iostream>
// Library that allows randomized number
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main() {

// Declare and initialize variables
int user = 0;




// Declare functions
// char userChoice();
// char computerChoice();
// void determineWinner(char, char);
// bool playAgain();


// Generate a random number for the computer's choice
  srand(time(NULL));
  int computer = rand() % 3 + 1;

// 1 = rock
// 2 = paper
// 3 = scissors


// Prompt the user to choose "rock," "paper," or "scissors" using a menu in a function
  cout << "Welcome Rock / Paper / Scissors game! Here are your choices: " << endl << endl << setw(14) << "R/r:  ROCK" << endl << "P/p:  PAPER" << endl << "S/s:  SCISSORS" << endl << endl;
  cout << "Please make a selection" << endl;
  cin >> user;





// Output the results of the game to the user
  if (user == computer) {
    cout << "Both you and the computer chose " << user << ". You end in a draw!" << endl;
  } else if ((user == 'R' || user == 'r') && (computer == 'P' || computer == 'p')) {
    cout << "You chose ROCK and the computer chose PAPER. PAPER covers ROCK. You lose. Sorry." << endl;
  } else if ((user == 'R' || user == 'r') && (computer == 'S' || computer == 's')) {
    cout << "You chose ROCK and the computer chose SCISSORS. ROCK crushes SCISSORS. You win!" << endl;
  } else if ((user == 'P' || user == 'p') && (computer == 'R' || computer == 'r')) {
    cout << "You chose PAPER and the computer chose ROCK. PAPER covers ROCK. You win!" << endl;
  } else if ((user == 'P' || 'p') && (computer == 'S' || computer == 's')) {
    cout << "You chose PAPER and the computer chose SCISSORS. SCISSORS cuts PAPER. You lose. Sorry." << endl;
  } else if ((user == 'S' || user == 's') && (computer == 'R' || computer == 'r')) {
    cout << "You chose SCISSORS and the computer chose ROCK. ROCK crushes SCISSORS. You lose. Sorry." << endl;
  } else if ((user == 'S' || user == 's') && (computer == 'P' || computer == 'p')) {
    cout << "You chose SCISSORS and the computer chose PAPER. SCISSORS cuts PAPER. You win!" << endl;
  } else {
    cout << "Invalid response entered." << endl;
  }

// Prompt the user to choose whether or not to play again
bool playAgain() {
  cout << "Would you like to play again? (Y/y for yes, N/n for No)" << endl;
  cin >> user;
    if (user == Y || user == y) {
      return true;
    } else if (user == N || user == n) {
      return false;
      cout << "Thank you for playing Rock / Paper / Scissors! Have a great day!";
    }
}






return 0;

}