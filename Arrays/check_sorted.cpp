#include <iostream>
#include <vector>

bool isSorted(std::vector<int>& array){
    int n = array.size();
    for(int i=1; i<n; i++){
        if(array[i-1] <= array[i]){

        }else{
            return false;
        }
    }
    return true;
}
int main(){
     std::vector<int> A = {1, 2, 2, 3, 4, 4, 4, 5, 6, 7, 7, 8, 9, 100};
    
    std::cout<<"Is sorted: "<<isSorted(A)<<std::endl;
    return 0;
}