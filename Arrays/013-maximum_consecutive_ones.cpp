#include <iostream>
#include <vector>

int max_consecutive_ones(std::vector<int>& arr){
    int n = arr.size();
    int count=0, max=0;

    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            count++;
            if(count>max) max = count;
        }else{
            count = 0;
        }
    }
    return max;
}
int main(){
    std::vector<int> A = {1,1,0,1,1,1,1,1,1,0,1,1,1,1};
    std::cout<<"Maximun consecutive ones : "<< max_consecutive_ones(A)<<std::endl;
    return 0;
}