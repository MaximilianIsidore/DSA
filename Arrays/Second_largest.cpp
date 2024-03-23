#include <iostream>
#include <vector>

int secondLargest(std::vector<int>& array){
    int second_largest = INT_MIN;
    int largest = INT_MIN;

    for(int el : array){
        if(el > largest){
            second_largest = largest;
            largest = el;
        }
        else if(el > second_largest){
            second_largest = el;
        }
    }

    return second_largest;
}

int secondSmallest(std::vector<int>& array){
    int second_Smallest = INT_MAX;
    int smallest = INT_MAX;

    for(int el : array){
        if(el < smallest){
            second_Smallest = smallest;
            smallest = el;
        }
        else if(el < second_Smallest){
            second_Smallest = el;
        }
    }

    return second_Smallest;
}


int main(){
    std::vector<int> A = {-2, 15, 42, 7, 88, 34, 50, 91, 29, 64, 10,90,-1,9,89,-4, -3};

    std::cout<<"Second Largest: "<<secondLargest(A)<<std::endl;
    std::cout<<"Second Smallest: "<<secondSmallest(A)<<std::endl;
    return 0;
}