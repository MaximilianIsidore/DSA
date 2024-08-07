#include<iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int> & arr){
    
    
    int n = arr.size();
    for(int i=0; i<n; i++){

        int min = INT_MAX;
        int pos;
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min = arr[j];
                pos = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp; 
    }
}

int main(){

    vector<int> arr{5, 7, 3, 18, 1, 2,1, 9};

    selection_sort(arr);
    for(auto e:arr){
        cout<<e<<" ";
    }
    cout<<"\n";
    return 0;
}