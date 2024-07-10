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
int randomNum = 0;

// Declare and define a user choice function
  char userChoice() {
    cout << "Welcome to the Rock / Paper / Scissors game! Here are your choices: " << endl << endl
        << setw(14) << "R/r:  ROCK" << endl << setw(15) << "P/p:  PAPER" << endl << setw(18) << "S/s:  SCISSORS" << endl << endl;
        cout << "Please make a selection" << endl;
    cin >> user;
    return toupper(user);  // Converts char to uppercase
  }

// Declare and define a computer choice function
  char computerChoice(int randomNum) {
    // Generate a random number for the computer's choice
    srand(time(NULL));
    randomNum = rand() % 4;  

    // Use an if else statement to convert the number to its associated choice of rock, paper, scissors
    if (randomNum == 1) {           // 1 = rock
      return 'R';
    } else if (randomNum == 2) {    // 2 = paper
      return 'P';
    } else if (randomNum == 3) {    // 3 = scissors
      return 'S';
    } else {
      return 'F';
    }
  }

// Declare and define a function to determine a winner and output the results to the screen
string determineWinner(char user, char computer) {
    if (user == computer) {
      // Use a nested if else statement to output what both choices were
        if (user == 'R') {
          return "Both you and the computer chose ROCK. You end in a draw!\n";
        } else if (user == 'P') {
          return "Both you and the computer chose PAPER. You end in a draw!\n";
        } else if (user == 'S') {
          return "Both you and the computer chose SCISSORS. You end in a draw!\n";
        }
    // If user and computer choices are different, if else to determine who wins
    } else if ((user == 'R') && (computer == 'P')) {
        return "You chose ROCK and the computer chose PAPER. PAPER covers ROCK. You lose. Sorry. \n";
    } else if ((user == 'R') && (computer == 'S')) {
        return "You chose ROCK and the computer chose SCISSORS. ROCK crushes SCISSORS. You win!\n";
    } else if ((user == 'P') && (computer == 'R')) {
        return "You chose PAPER and the computer chose ROCK. PAPER covers ROCK. You win!\n";
    } else if ((user == 'P') && (computer == 'S')) {
        return "You chose PAPER and the computer chose SCISSORS. SCISSORS cuts PAPER. You lose. Sorry. \n";
    } else if ((user == 'S') && (computer == 'R')) {
        return "You chose SCISSORS and the computer chose ROCK. ROCK crushes SCISSORS. You lose. Sorry. \n";
    } else if ((user == 'S') && (computer == 'P')) {
        return "You chose SCISSORS and the computer chose PAPER. SCISSORS cuts PAPER. You win!\n";
    } else {
        return "Invalid response entered.\n";
    } 
  
    return "Invalid response entered.\n";
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

  // Use a while loop to restart the game is user chooses to play again
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