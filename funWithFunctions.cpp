#include <iostream>
#include <string> 

int getAnIntFromUser() {
int x{};                                   //initialize to store variable from user
std::cout << "Please enter an integer";    // "prompt"
std::cin >> x; 
    return x;                             //return the user's int
}

int compareTwoInts(int x, int y) {
if (x > y) { return x;}             // compares x to y and returns x
else if (y > x) { return y; }       // compres y to x and returns y

else {                          
std::cout << "Please enter 2 differing integers."; // returns this is the ints are the same
return 0;}
}

int sumTwoInts(int x, int y) {
int z = x + y ;                 // simply adds the 2 ints into variable z
return z;                       // returns z
}

int main() {
int a{};                                                                            // initializes 2 variables for later
int b{};

std::cout << "Please enter first integer.";                                         // prompt user for the 2 variables to store
std::cin>> a; 
std::cout << "Please enter second integer." ; 
std::cin >> b; 

std::cout << "The larger of the two ints is " << compareTwoInts(a, b) << '\n' ;    // prints the larger number to console

std::cout << "The sum of the two ints is " << sumTwoInts(a,b) ;                     // prints the sum to console


}