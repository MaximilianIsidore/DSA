#include <iostream>
#include <vector>

int missing_num(std::vector<int>& arr){
    int N=arr.size()+1;

    int sum = (N * (N + 1)) / 2;

    //Summation of all array elements:
    int s2 = 0;
    for (int i = 0; i < N - 1; i++) {
        s2 += arr[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}
int main(){

    std::vector<int> A = {1,2,3,5,6,7};
    std::cout<<"The missing number is: "<<missing_num(A)<<std::endl;
    return 0;
}