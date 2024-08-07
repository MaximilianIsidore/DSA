#include <iostream>
#include <vector>

using namespace std;

void insertion_sort(vector<int> & arr){
    int n = arr.size();

    for(int i=0; i<n; i++){
        int j = i;

        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j-1] , arr[j]);
            j--;
        }
    }
}

int main(){

    vector<int> arr{5, 7, 3, 18, 1, 2,1, 9};

    insertion_sort(arr);

    for(auto e:arr){
        cout<<e<<" ";
    }
    cout<<"\n";
    return 0;
}