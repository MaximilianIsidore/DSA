#include <iostream>

using namespace std;

void print_N_to_1(int n){

    cout<<n<<" ";
    if(n>1)  print_N_to_1(n-1);

    
}

int main(){

    print_N_to_1(10);
    return 0;
}