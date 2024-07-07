#include <iostream>

using namespace std;

int sum_of_N_num(int n,int sum = 0){

    //base
    if(n<1) return sum;

    return sum_of_N_num(n-1, sum+n);
}

int main(){

    cout<<sum_of_N_num(5);
    return 0;
}