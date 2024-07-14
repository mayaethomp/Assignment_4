// Maya Thompson
// CS 1, Section# 0107
// Assignment #4, Problem #1
// Summary: This program finds all Perfect Numbers that fall between two integer values inputted by the user. A number is a perfect number if it is equal to the sum of its proper divsors (excluding and smaller than the number itself)

#include <iostream>
using namespace std;

// Declare functions
bool isAFactor(int x, int y);
void isPerfect(int startval, int endval);

 // Define a function to determine if a number is a factor of another number
bool isAFactor(int x, int y) {
  return x % y == 0;
}

// Define a function to determine if a factor is a perfect number
void isPerfect(int startval, int endval) {
  bool perfect = false;
  // Create a loop that steps through the range of numbers between startval and endval
  for (int outerval = startval; outerval <= endval; outerval++) {
    int sum = 0;   // Sum of proper divisors
    // Create an inner loop that will step through the values from 1 to (outerval/2) 
    for (int innerval = 1; innerval <= outerval / 2; innerval++) {
      if (isAFactor(outerval, innerval)) { 
        sum += innerval; // add proper divisor to sum
      } 
    } if (sum == outerval) {
        cout << outerval << " is a perfect number." << endl;
        perfect = true;
      }
        
  }
    // If no perfect numbers are found
    if (!perfect) {
      cout << "There is no perfect number between " << startval << " and " << endval << endl;
    } 
  } 

int main() {


  // Declare and initialize variables
  int startval = 0;
  int endval = 0;

  // Prompt the user to input two integer values
  cout << "Enter starting integer: " << endl;
  cin >> startval;

  cout << "Enter ending integer: " << endl;
  cin >> endval; 

  // Call function to check for perfect numbers 
  isPerfect(startval, endval);

  return 0;

}
