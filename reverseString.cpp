#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string input = "";                                              //initialize input string

    cout << "please enter a string";                                //prompt for a string
    cin >>  input;                                                  //get user input

    string reversed = "";                                           //initialize reverse string

    for (int i = input.length() - 1; i >= 0; i--) {                 // for loop input length -1 so it starts at the end of of the string
        reversed += input[i];                                       //loop stores variables backwards in reversed
    }

    std::cout << "Original string: " << input << std::endl;       
    std::cout << "Reversed string: " << reversed << std::endl;

    return 0;
}