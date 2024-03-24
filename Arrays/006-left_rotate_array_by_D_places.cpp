#include <iostream>
#include <vector>

void left_rotate_by_1(std::vector<int>& arr, int d){
    int n = arr.size();
    d = d % n;
    std::vector<int> temp;
    for(int i=0; i<d; i++){
        temp.push_back(arr[i]);
    }

    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }

    int j =0;
    for(int i=n-d; i<n; i++){
        arr[i] = temp[j];
        j++;
    }
}

int main(){
    
    std::vector<int> A = {1, 2, 2, 3, 4, 4, 4, 5, 6, 7, 7, 8, 9, 100, 100, 100};
    int n = A.size();
    left_rotate_by_1(A, 4);
    std::cout<<"Rotated array\n ";
    for(int i=0; i<n; i++){
        std::cout<<A[i]<<", ";
    }
    std::cout<<std::endl;
    return 0;
}