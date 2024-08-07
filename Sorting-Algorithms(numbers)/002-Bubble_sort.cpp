#include <iostream>
#include <vector>

using namespace std;

void bubble_sort(vector<int>& arr){

    int n = arr.size();

    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            if(arr[j-1] > arr[j]){
                swap(arr[j-1], arr[j]);
            }
        }
    }
}

int main(){

    vector<int> arr{5, 7, 3, 18, 1, 2,1, 9};

    bubble_sort(arr);
    for(auto e:arr){
        cout<<e<<" ";
    }
    cout<<"\n";

    return 0;
}