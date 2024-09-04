#include<iostream>

using namespace std;


int partition(int arr[],int low,int high){
    int pivot = arr[high]; //last element is pivot
    int i = low;

    for(int j=low; j<high; j++){
        if(arr[j] < pivot){
            swap(arr[i], arr[j]);
            i++;
        }
    }

    swap(arr[i], arr[high]);
    return i; //new pivot
}

void quickSort(int arr[],int low, int high){
    
    if(low<high){

        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot-1); //left partition
        quickSort(arr, pivot, high);
    }
}



void printArray(int arr[], int s) {
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main(){

    int arr[] = {9,8,5,12,4,2,3};
     int s = sizeof(arr)/sizeof(arr[0]);
    //cout<<s<<"\n";
    quickSort(arr, 0, s-1);
    printArray(arr, s);


    return 0;
}