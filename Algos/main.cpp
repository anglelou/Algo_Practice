//
//  main.cpp
//  Algos
//
//  Created by Angel Soto.
//

// Return Nth value in Fibonacci sequence
const int fib(int n)
{
    if (n <= 2)
        return 1;
    
    return fib(n - 1) + fib(n - 2);
}

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    std::cout << "Fib: ";
    std::cout << fib(7) << std::endl;
    
    
    
    
    return 0;
}
