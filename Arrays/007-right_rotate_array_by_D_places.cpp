#include <iostream>
#include <vector>

void right_rotate_by_1(std::vector<int>& arr, int d){
    int n = arr.size();
    d = d % n;

    std::vector<int> temp;

    for(int i=n-1; i>=n-d; i--){
        temp.push_back(arr[i]);
    }

    for(int i=n-d-1; i>=0; i--){
        arr[i+d] = arr[i];
    }

    int j =0;
    for(int i=d-1; i>=0; i--){
        arr[i] = temp[j];
        j++;
    }
}

int main(){
    
    std::vector<int> A = {1, 2, 2, 3, 4, 4, 4, 5, 6, 7, 7, 8, 9, 77, 109, 108};
    int n = A.size();
    right_rotate_by_1(A, 4);
    std::cout<<"Rotated array\n ";
    for(int i=0; i<n; i++){
        std::cout<<A[i]<<", ";
    }
    std::cout<<std::endl;
    return 0;
}