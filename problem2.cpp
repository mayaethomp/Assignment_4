// Maya Thompson
// CS 1, Section# 0107
// Assignment #4, Problem #2
// Summary: This program creates a rock, paper, scissors game between the user and a computer (randomized picks)

#include <iostream>
#include <stdlib.h> // Library that allows randomized number
#include <iomanip>
#include <cmath>
#include <sstream>

using namespace std;

// Define and initialize variables 
char user = 'A';
int randomNum = 0;

// Declare and define a user choice function
  char userChoice() {
    cout << "Welcome Rock / Paper / Scissors game! Here are your choices: " << endl << endl
        << setw(14) << "R/r:  ROCK" << endl << setw(15) << "P/p:  PAPER" << endl << setw(18) << "S/s:  SCISSORS" << endl << endl;
        cout << "Please make a selection" << endl;
    cin >> user;
    return toupper(user);
  }

// Declare and define a computer choice function
  char computerChoice(int randomNum) {
    // Generate a random number for the computer's choice
    srand(time(NULL));
    randomNum = rand() % 4;
    // 1 = rock
    // 2 = paper
    // 3 = scissors
    if (randomNum == 1) {
      return 'R';
    } else if (randomNum == 2) {
      return 'P';
    } else if (randomNum == 3) {
      return 'S';
  } else {
    return 'F';
  }
  }

// Declare and define a function to determine a winner
string determineWinner(char user, char computer) {
    ostringstream result;
    if (user == computer) {
      // Use an if statement to determine what both choices were
        if (user == 'R') {
          result << "Both you and the computer chose ROCK. You end in a draw!\n";
        } else if (user == 'P') {
          result << "Both you and the computer chose PAPER. You end in a draw!\n";
        } else if (user == 'S') {
          result << "Both you and the computer chose SCISSORS. You end in a draw!\n";
        }
    } else if ((user == 'R') && (computer == 'P')) {
        result << "You chose ROCK and the computer chose PAPER. PAPER covers ROCK. You lose. Sorry. \n";
    } else if ((user == 'R') && (computer == 'S')) {
        result << "You chose ROCK and the computer chose SCISSORS. ROCK crushes SCISSORS. You win!\n";
    } else if ((user == 'P') && (computer == 'R')) {
        result << "You chose PAPER and the computer chose ROCK. PAPER covers ROCK. You win!\n";
    } else if ((user == 'P') && (computer == 'S')) {
        result << "You chose PAPER and the computer chose SCISSORS. SCISSORS cuts PAPER. You lose. Sorry. \n";
    } else if ((user == 'S') && (computer == 'R')) {
        result << "You chose SCISSORS and the computer chose ROCK. ROCK crushes SCISSORS. You lose. Sorry. \n";
    } else if ((user == 'S') && (computer == 'P')) {
        result << "You chose SCISSORS and the computer chose PAPER. SCISSORS cuts PAPER. You win!\n";
    } else {
        result << "Invalid response entered.\n";
    }
    return result.str();
}


// Declare and define a function that prompts the user if they want to play again
   bool playAgain() {
    char playYN;
    cout << "Would you like to play again? (Y/y for yes, N/n for No)" << endl;
    cin >> playYN;
      if (playYN == 'Y' || playYN == 'y') {
        return true;
      } else if (playYN == 'N' || playYN == 'n') {
        cout << "Thank you for playing Rock / Paper / Scissors! Have a great day!";
        return false;
      } else {
        return false;
      }
   }


int main() {

  // MAIN GAME // 
  
  // Required to prevent endless playAgain loop??
  bool keepPlaying = true;

  while (keepPlaying) {
    // Use userChoice() function to prompt the user to choose "rock," "paper," or "scissors" using a menu in a function
    char user = userChoice();
     // Use computerChoice() function to generate a random number to assign the computer's choice
    char computer = computerChoice(randomNum);
    // Output the results of the game to the user
    cout << determineWinner(user, computer) << endl;
    // Prompt the user to choose whether or not to play again and run the result through playAgain function
    keepPlaying = playAgain();
  
  }


return 0;

}