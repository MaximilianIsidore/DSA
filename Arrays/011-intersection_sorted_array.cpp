#include <iostream>
#include <vector>

std::vector<int> findIntersection (std::vector<int>& A, std::vector<int>& B){

    int n = A.size();
    int m = B.size();

    int i=0;
    int j=0;
    std::vector<int> arr;

    while(i<n && j<m){
        if(A[i] < B[j]){
           i++;
        }
        else if(B[j] < A[i]){
           j++;
        }
        else{
           if (arr.empty() || arr.back() != A[i]) {
                arr.push_back(A[i]);
            }
            i++;
            j++;
        }
    }


    return arr;
}
int main(){
    std::vector<int> arr1 = {1, 3, 4, 5,6, 7, 9};
    std::vector<int> arr2 = {2, 4,4, 6, 8};

    std::vector<int> Array = findIntersection(arr1, arr2);

    std::cout << "Intersection of the two arrays:";
    for (int num : Array) {
        std::cout << " " << num;
    }
    std::cout << std::endl;
    return 0;
}