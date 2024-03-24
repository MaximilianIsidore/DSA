#include<iostream>
#include<vector>

int linear_search(const std::vector<int>& arr, const int& el ){
    int n = arr.size();

    for(int i=0; i<n; i++){
        if(arr[i] == el){
            return i;
        }
    }

    return -1;
}
int main(){

    std::vector<int> A = {1, 4,5,6,7,8, 9,12,23};
    std::cout<<"The element is found at index: "<<linear_search(A, 8)<<std::endl;
    return 0;
}