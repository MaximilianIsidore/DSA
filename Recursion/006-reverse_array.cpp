#include <iostream>

using namespace std;


void reverse_array(int arr[], int start, int end){
    if(start < end){
        swap(arr[start], arr[end]);
        reverse_array(arr, start+1,end-1);
    }
}

void reverse_array(int arr[], int size){

    
    reverse_array(arr, 0, size-1);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[] ={1,2,3,4,5,6,7,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverse_array(arr, size);

    
    return 0;
}