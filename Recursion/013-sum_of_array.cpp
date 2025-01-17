#include<iostream>

using namespace std;

int sumArr(int arr[], int n){
 if(n==0) return 0;

 return arr[0] + sumArr(arr+1, n-1);
}

int main(){

    int n = 5;
    int x[n] = {1,2,3,4,5};
    
   
   
    cout<<"\n";
    cout<<sumArr(x,n);
    return 0;
}