#include<iostream>

using namespace std;

int first_index(int *arr, int x, int i, int n){

    if(n==0) return -1;

    if(arr[0] == x) return i;

    return first_index(arr+1, x, i+1, n-1);
}

int main(){

    int a[] = {4, 75, 5 ,9, 4, 5, 10, 34};
    cout<<"\n"<<first_index(a,5,0,8);
    return 0;
}