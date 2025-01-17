#include<iostream>

using namespace std;

int last_index(int *arr, int x, int i, int n){

    if(n==0) return -1;

    if(arr[i] == x) return i;

    return last_index(arr, x, i-1, n-1);
}

int main(){

    int a[] = {4, 75, 5 ,9, 5, 5, 4, 34};
    int n = 8;
    cout<<"\n"<<last_index(a,60,n-1,n);
    return 0;
}