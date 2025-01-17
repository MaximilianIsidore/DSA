#include <iostream>

using namespace std;

bool find_element(int *arr,int x, int n){

    if(n==0) return false;

    if(arr[0] == x) return true;

    return find_element(arr+1, x, n-1);

}

int main(){

    int a[5] = {4, 7,9, 10, 34};
    cout<<"\n"<<find_element(a,11,5);

    return 0;
}