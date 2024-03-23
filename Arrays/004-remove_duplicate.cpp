#include <iostream>
#include <vector>

//Two-pointer approach
int removeDuplicate(std::vector<int>& array){
    int k=1;
    int n = array.size();

    for(int i=1; i<n; i++){
        if(array[k-1] != array[i]){
            array[k] = array[i];
            k++;
        }
    }

    return k;
}

int main(){
     std::vector<int> A = {1, 2, 2, 3, 4, 4, 4, 5, 6, 7, 7, 8, 9, 100, 100, 100};
    int n = removeDuplicate(A);
    for(int i=0; i<n; i++){
        std::cout<<A[i]<<", ";
    }
    std::cout<<std::endl;
    return 0;
}