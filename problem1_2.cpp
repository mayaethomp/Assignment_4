#include <iostream>

using namespace std;


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
    if (isAFacor(startval, endval)) {
        
    }
}