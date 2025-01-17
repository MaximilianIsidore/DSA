#include<iostream>

using namespace std;

int mul(int x, int n){

if(n==0) return 0;

return x + mul(x,n-1);
    
}

int main(){

    
    int x;
    cout<<"Enter a number: ";
    cin>>x;

    int n;
    cout<<"Enter the multiplier: ";
    cin>>n;
    cout<<"\n";
    cout<<mul(x,n);
    return 0;

}