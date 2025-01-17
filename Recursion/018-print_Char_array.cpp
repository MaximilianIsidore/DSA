#include <iostream>

using namespace std;

void print(char arr[]){

    if(arr[0] == '\0') return;

    print(arr+1);
    cout<<arr[0];
}

void rev_print(char arr[]){

    if(arr[0] == '\0') return;

    cout<<arr[0];
    rev_print(arr+1);
}

int len(char arr[]){

    if(arr[0] == '\0') return 0;

    return 1 + len(arr+1);
}

int main(){
    char a[4] = {'a', 'b', 'c'};

    print(a);
    cout<<"\n";
    rev_print(a);
    cout<<"\n"<<len(a);
    
    return 0;
}