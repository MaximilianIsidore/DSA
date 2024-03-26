#include <iostream>
#include <vector>

int find_num_that_appear_once(std::vector<int>& arr){
    int n = arr.size();

    int xorr = 0;
    for(int i=0; i<n; i++){
        xorr ^= arr[i];
    }

    return xorr;
}
int main(){

    std::vector<int> A = {1,1,4,4,5,6,5,6,7,7,3,9,3};
    std::cout<<"The number that appear only once : "<<find_num_that_appear_once(A)<<std::endl;
    return 0;
}