#include<iostream>

using namespace std;
int pow(int x, int n){

if(n==0) return 1;

return x * pow(x,n-1);
    
}

int main(){

    
    int x;
    cout<<"Enter a number: ";
    cin>>x;

    int n;
    cout<<"Enter the power: ";
    cin>>n;
    cout<<"\n";
    cout<<pow(x,n);
    return 0;

}