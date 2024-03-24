#include <iostream>
#include <vector>

std::vector<int> findUnion (std::vector<int>& A, std::vector<int>& B){

    int n = A.size();
    int m = B.size();

    int i=0;
    int j=0;
    std::vector<int> union_arr;

    while(i<n && j<m){
        if(A[i] <= B[j]){
            if(union_arr.size() == 0 || union_arr.back() != A[i]){
                union_arr.push_back(A[i]);
            }
            i++;
        }
        else{
            if(union_arr.size() == 0 || union_arr.back() != B[j]){
                union_arr.push_back(B[j]);
            }
            j++;
        }
    }

    while(i<n){
         if(union_arr.size() == 0 || union_arr.back() != A[i]){
                union_arr.push_back(A[i]);
            }
            i++;
    }

    while(j<m){
        if(union_arr.size() == 0 || union_arr.back() != B[j]){
                union_arr.push_back(B[j]);
            }
            j++;
    }

    return union_arr;
}
int main(){
    std::vector<int> arr1 = {1, 3, 3, 5, 7, 9};
    std::vector<int> arr2 = {2, 4,4, 6, 8};

    std::vector<int> unionArray = findUnion(arr1, arr2);

    std::cout << "Union of the two arrays:";
    for (int num : unionArray) {
        std::cout << " " << num;
    }
    std::cout << std::endl;
    return 0;
}