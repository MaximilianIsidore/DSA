#include <iostream>


long long iterativePower(long long base, long long exponent) {
    // long long result = 1;
    // while (exponent > 0) {
    //     if (exponent % 2 == 1) {
    //         result *= base;
    //     }
    //     base *= base;
    //     exponent /= 2;
    // }
    // return result;

    
    return base << (exponent-1);
}

int main() {
    long long base = 2;
    long long exponent = 10;
    std::cout << base << "^" << exponent << " = " << iterativePower(base, exponent) << std::endl;
    return 0;
}
