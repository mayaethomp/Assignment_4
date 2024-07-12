// Maya Thompson
// CS 1, Section# 0107
// Assignment #4, Problem #1
// Summary: This program finds all Perfect Numbers that fall between two integer values inputted by the user

#include <iostream>
#include <cmath>

using namespace std;

// A number is a perfect number if it is equal to the sum of its proper divsors (sum of its divisors excluding the number itself)

// Declare and define a function to determine if a number is a factor of another number
bool isAFactor(int x, int y) {
  if (return x % y == 0) {
    return true;
  } else {
    return false;
  }
}


// Declare and define a function to determine if a factor is a perfect number
bool isPerfect(int num) {
  // Declare and initialize a variable to store the sum of proper divisors
  int sum = 1;
  // Create a loop that steps through the range of numbers between startval and endval
  for (int outerval = startval; outerval <= endval; outerval++) {
    // Create an inner loop that will step through the values from 1 to (outerval/2) to determine the factors of the number
    for (int innerval = 1; innerval < (outerval / 2; innerval++) {
      // Use a function to determine if a number is a perfect number
      isAFactor(starval, endval);
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




   
  

// Output perfect number to screen

  if (isAFacor == true && isPerfect == true) {
    cout << // insert variable here
     << " is a perfect number." << endl;
     
  } else {
    cout << "There is no perfect number between " << startval << " and " << endval << endl;
  }

  return 0;

}
