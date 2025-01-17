#include<iostream>

using namespace std;

bool check_sorted1(int *arr, int n){

if(n==0 || n==1) return true;

if(arr[0] > arr[1]) return false;

return check_sorted1(arr+1, n-1);

}

bool check_sorted2(int *arr, int n){

if(n==0 || n==1) return true;

if(arr[n-2] > arr[n-1]) return false;

return check_sorted2(arr, n-1);
}

int main(){

    int n = 6;
    int x[n] = {1,2,3,4,5,7};
    
   
   
    cout<<"\n";
    cout<<check_sorted1(x,n);

    cout<<"\n";
    cout<<check_sorted2(x,n);
    return 0;

}