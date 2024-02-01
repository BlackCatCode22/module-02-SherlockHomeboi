#include <iostream>
#include <string> 

int main() { 

    int a{}; 
    int b{}; 
    int c{}; 

    std::cout << "Please enter first integer.";
    std::cin >> a; 
    std::cout << "Please enter second integer.";
    std::cin >> b; 
    std::cout << "Please enter third integer.";
    std::cin >> c;


    if (a > b && a > c) { 
        std::cout << a << " is the largest of the three.";
    }

    else if (b > a && b > c) {
        std::cout << b << " is the largest of the three.";
    }
    else if (c > a && c > b) {
        std::cout << c << " is the largest of the three.";
    }
    else {std::cout << "Please enter at least 1 differing integer."; }
    
    return 0; 
}
