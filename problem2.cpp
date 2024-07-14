// Maya Thompson
// CS 1, Section# 0107
// Assignment #4, Problem #2
// Summary: This program creates a rock, paper, scissors game between the user and a computer (randomized picks)

#include <iostream>
#include <stdlib.h> // Library that allows randomized number
#include <iomanip>
#include <cmath>
#include <ctime> // Library for time functions for random number generator

using namespace std;

// Define and initialize variables 
char user = 'A';
int randomNum = 0;

// Declare and define a user choice function
  char userChoice() {
    char user;
    while (true) {
        cout << "Welcome to the Rock / Paper / Scissors game! Here are  your choices: " << endl << endl
            << setw(14) << "R/r:  ROCK" << endl << setw(15) << "P/p:  PAPER" << endl << setw(18) << "S/s:  SCISSORS" << endl << endl;
            cout << "Please make a selection" << endl;
        cin >> user;
        user = toupper(user);  // Changes char to uppercase
        if (user == 'R' || user == 'P' || user == 'S') {
            return user;
        } else {
            cout << "Invalid response entered. Please try again." << endl;
        }
    }
  }

// Declare and define a computer choice function
  char computerChoice(int randomNum) {
    // Generate a random number for the computer's choice
    randomNum = rand() % 3;  

    // Use an if else statement to convert the number to its associated choice of rock, paper, scissors
    if (randomNum == 0) {           // 0 = rock
      return 'R';
    } else if (randomNum == 1) {    // 1 = paper
      return 'P';
    } else if (randomNum == 2) {    // 2 = scissors
      return 'S';
    } else {
      return 'F';
    }
  }

// Declare and define a function to determine a winner and output the results to the screen
void determineWinner(char user, char computer) {
    if (user == computer) {
      // Use a nested if else statement to output what both choices were
        if (user == 'R') {
          cout << "Both you and the computer chose ROCK. You end in a draw!\n";
        } else if (user == 'P') {
          cout << "Both you and the computer chose PAPER. You end in a draw!\n";
        } else if (user == 'S') {
          cout << "Both you and the computer chose SCISSORS. You end in a draw!\n";
        }
    // If user and computer choices are different, if else to determine who wins
    } else if ((user == 'R') && (computer == 'P')) {
        cout <<  "You chose ROCK and the computer chose PAPER. PAPER covers ROCK. You lose. Sorry. \n";
    } else if ((user == 'R') && (computer == 'S')) {
        cout << "You chose ROCK and the computer chose SCISSORS. ROCK crushes SCISSORS. You win!\n";
    } else if ((user == 'P') && (computer == 'R')) {
        cout << "You chose PAPER and the computer chose ROCK. PAPER covers ROCK. You win!\n";
    } else if ((user == 'P') && (computer == 'S')) {
        cout << "You chose PAPER and the computer chose SCISSORS. SCISSORS cuts PAPER. You lose. Sorry. \n";
    } else if ((user == 'S') && (computer == 'R')) {
        cout << "You chose SCISSORS and the computer chose ROCK. ROCK crushes SCISSORS. You lose. Sorry. \n";
    } else if ((user == 'S') && (computer == 'P')) {
        cout << "You chose SCISSORS and the computer chose PAPER. SCISSORS cuts PAPER. You win!\n";
    } else {
        cout << "Invalid response entered.\n";
    } 

   }


// Declare and define a function that prompts the user if they want to play again
   bool playAgain() {
    char playYN;
    
      while (true) {
        cout << "Would you like to play again? (Y/y for yes, N/n for No)" << endl;
        cin >> playYN;
        
        if (playYN == 'Y' || playYN == 'y') {
          return true; // User plays again
        } else if (playYN == 'N' || playYN == 'n') {
          cout << "Thank you for playing Rock / Paper / Scissors! Have a great day!"; // Ends game
          return false; 
        } else {
          cout << "Invalid response entered." << endl; // Repeats loop
        }

      }
   }


int main() {

  // MAIN GAME // 
  
  
  bool keepPlaying = true;

  // Initialize random number generator
  srand(time(NULL));

  // Use a while loop to restart the game is user chooses to play again
  while (keepPlaying) {
    // Use userChoice() function to prompt the user to choose "rock," "paper," or "scissors" using a menu in a function
    char user = userChoice();
     // Use computerChoice() function to generate a random number to assign the computer's choice
    char computer = computerChoice(randomNum);
    // Output the results of the game to the user
    determineWinner(user, computer);
    // Prompt the user to choose whether or not to play again and run the result through playAgain function
    keepPlaying = playAgain();
  }


return 0;

}