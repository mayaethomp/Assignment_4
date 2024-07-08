// Maya Thompson
// CS 1, Section# 0107
// Assignment #4, Problem #2
// Summary: This program creates a rock, paper, scissors game between the user and a computer (randomized picks)

#include <iostream>
// Library that allows randomized number
#include <stdlib.h>

using namespace std;

int main() {

// Declare and initialize variables
int user = 0;
int computer = 0;



// Declare functions
char userChoice();
char computerChoice();
void determineWinner(char, char);
bool playAgain();


// Generate a random number for the computer's choice
srand(time(NULL));
int computer = rand() % 3 + 1;



// Prompt the user to choose "rock," "paper," or "scissors" using a menu in a function










return 0;

}