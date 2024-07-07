#include <iostream>


int factorial(int n){

    // Base case
    if(n == 0){
        return 1;
    }

    int small = factorial(n-1); // or return n * factorial(n-1);
    int big = n * small;

    return big;
}

int main(){

    std::cout << "Enter a Number : ";
    int n;
    std::cin >> n;

    int result = factorial(n);
   std::cout << "The factorial of " << n << " is " << result;

    return 0;
}