#include <iostream>
#include <vector>

void left_rotate_by_1(std::vector<int>& arr){
    int temp = arr[0];
    int n = arr.size();

    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int main(){
    
    std::vector<int> A = {1, 2, 2, 3, 4, 4, 4, 5, 6, 7, 7, 8, 9, 100, 100, 100};
    int n = A.size();
    left_rotate_by_1(A);
    std::cout<<"Rotated array\n ";
    for(int i=0; i<n; i++){
        std::cout<<A[i]<<", ";
    }
    std::cout<<std::endl;
    return 0;
}