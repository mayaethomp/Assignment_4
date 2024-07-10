// Maya Thompson
// CS 1, Section# 0107
// Assignment #4, Problem #2
// Summary: This program creates a rock, paper, scissors game between the user and a computer (randomized picks)

#include <iostream>
#include <stdlib.h> // Library that allows randomized number
#include <iomanip>
#include <cmath>

using namespace std;

// Define and initialize variables 
char user = 'A';
int computer = 0;

// Declare and define a computer choice function
  void computerChoice(int) {
    // int(computer); ??
    if (computer == 1) {
      computer == 'R';
    } else if (computer == 2) {
      computer == 'P';
    } else if (computer == 3) {
      computer == 'S';
    }
  }


// Declare and define a user choice function
  char userChoice() {
    cout << "Welcome Rock / Paper / Scissors game! Here are your choices: " << endl << endl
        << setw(14) << "R/r:  ROCK" << endl << "P/p:  PAPER" << endl << "S/s:  SCISSORS" << endl << endl;
        cout << "Please make a selection" << endl;
    cin >> user;
  }


// Declare and define a function to determine a winner
  string determineWinner(char, char) {
    if (user == computer) {
      cout << "Both you and the computer chose " << user << ". You end in a draw!" << endl;
    } else if ((user == 'R' || user == 'r') && (computer == 'P')) {
      cout << "You chose ROCK and the computer chose PAPER. PAPER covers ROCK. You lose. Sorry." << endl;
    } else if ((user == 'R' || user == 'r') && (computer == 'S')) {
      cout << "You chose ROCK and the computer chose SCISSORS. ROCK crushes SCISSORS. You win!" << endl;
    } else if ((user == 'P' || user == 'p') && (computer == 'R')) {
      cout << "You chose PAPER and the computer chose ROCK. PAPER covers ROCK. You win!" << endl;
    } else if ((user == 'P' || 'p') && (computer == 'S')) {
      cout << "You chose PAPER and the computer chose SCISSORS. SCISSORS cuts PAPER. You lose. Sorry." << endl;
    } else if ((user == 'S' || user == 's') && (computer == 'R')) {
      cout << "You chose SCISSORS and the computer chose ROCK. ROCK crushes SCISSORS. You lose. Sorry." << endl;
    } else if ((user == 'S' || user == 's') && (computer == 'P')) {
      cout << "You chose SCISSORS and the computer chose PAPER. SCISSORS cuts PAPER. You win!" << endl;
    } else {
      cout << "Invalid response entered." << endl;
    }
  }

// Declare and define a function that prompts the user if they want to play again
   bool playAgain(char) {
    cout << "Would you like to play again? (Y/y for yes, N/n for No)" << endl;
    cin >> user;
      if (user == 'Y' || user == 'y') {
        return true;
      } else if (user == 'N' || user == 'n') {
        return false;
        cout << "Thank you for playing Rock / Paper / Scissors! Have a great day!";
      }
  }


int main() {

// 1 = rock
// 2 = paper
// 3 = scissors


  while (playAgain() == true) {
    // Generate a random number for the computer's choice
    srand(time(NULL));
    int computer = rand() % 4;
    
// Convert randomize number to char computer's choice
    computerChoice(computer);
    
    // Prompt the user to choose "rock," "paper," or "scissors" using a menu in a function
    userChoice(user);
    
    // Output the results of the game to the user
    determineWinner();

    // Prompt the user to choose whether or not to play again and run the result through playAgain function
    playAgain();
  }












return 0;

}