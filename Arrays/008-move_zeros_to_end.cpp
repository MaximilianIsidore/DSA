#include <iostream>
#include <vector>

void move_zero_to_end(std::vector<int>& arr){
    int n = arr.size();
    int j=-1;

    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            j=i;
            break;
        }
    }

    for(int i=j+1; i<n; i++){
       if(arr[i] !=0 ){
        std::swap(arr[i], arr[j]);
        j++;
       }
    }
}
int main(){
    std::vector<int> A = {1, 0, 0,6, 7, 0, 5};
    int n = A.size();
    move_zero_to_end(A);
    std::cout<<"zeros to end array\n ";
    for(int i=0; i<n; i++){
        std::cout<<A[i]<<", ";
    }
    std::cout<<std::endl;
    return 0;
}