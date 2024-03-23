#include <iostream>
#include <vector>


int largestElement(std::vector<int>& array){
    int max = INT_MIN;

    for(int el : array){
        if(el > max) max = el;
    }
    return max; 
}

int smallestElement(std::vector<int>& array){
    int min = INT_MAX;

    for(int el : array){
        if(el < min) min = el;
    }

    return min;
}

int main(int argc, char *argv[]){

    std::vector<int> A = {-2, 15, 42, 7, 88, 34, 50, 91, 29, 64, 10,-1,9};

    std::cout<<"Largest Element: "<< largestElement(A)<<std::endl;
    std::cout<<"Smallest Element: "<< smallestElement(A)<<std::endl;
    return 0;
}