#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& arr,int low, int mid, int high);

void merge_sort(vector<int>& arr,int low, int high){

    if(low >= high) return;
    int mid = (low + high)/2;

    merge_sort(arr,low, mid);
    merge_sort(arr, mid+1, high);

    merge(arr, low, mid, high);
}

void merge(vector<int>& arr,int low, int mid, int high){
    vector<int> temp;

    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}

void merge_sort(vector<int>& arr){
    int n = arr.size();

    merge_sort(arr, 0, n);
}

int main(){

    vector<int> arr{5, 7, 3, 18, 1, 2,1, 9};

    merge_sort(arr);
    for(auto e:arr){
        cout<<e<<" ";
    }
    cout<<"\n";
    
    return 0;
}