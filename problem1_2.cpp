#include <iostream>

using namespace std;

// Declare and initialize variables
int startval = 0;
int endval = 0;

// Function to determine if a number if a factor of another
bool isAFactor(int x, int y) {
    if (x % y == 0) {
        return true;
    } else {
        return false;
    }
}

// Function to determine if a number num is perfect
bool isPerfect (int num) {

    // Variable for sum of divisors
    int sum = 1;
    
    // Create a loop that steps through the range of numbers between startval and endval
  for (int outerval = startval; outerval <= endval; outerval++) {
    if (isAFactor(startval, endval) == true) {
        if (outerval * outerval != num) {
            sum = sum + outerval + (num/outerval);
        } else {
            sum = sum + outerval;
        }
    if (sum == num && num != 1) {
        return true;
        cout << outerval << " is a perfect number." << endl;
    } else {
        return false;
    }
        
    } else {
        cout << "There is no perfect number between " << startval << " and " << endval << endl;
    }
}
}

int main() {

// Prompt the user to input two integer values
  cout << "Enter starting integer: " << endl;
  cin >> startval;

  cout << "Enter ending integer: " << endl;
  cin >> endval; 
   
    isAFactor(startval, endval);






    return 0;

}