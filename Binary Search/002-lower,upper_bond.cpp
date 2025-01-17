#include <iostream>
#include <vector>

using namespace std;

int lower_bound(vector<int>& arr, int x){
    int low = 0;
    int high = arr.size()-1;
    int ans = arr.size();

    while(low <= high){
        int mid = low + (high-low)/2;

        if(arr[mid] >= x){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    return ans;
    
}

int upper_bound(vector<int>& arr, int x){
    int low = 0;
    int high = arr.size()-1;
    int ans = arr.size();

    while(low <= high){
        int mid = low + (high-low)/2;

        if(arr[mid] > x){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    return ans;
    
}

int main(){

    vector<int> a = {2,3,4,7,9,12,15};

    cout<<lower_bound(a,91)<<"\n";
    cout<<upper_bound(a,9)<<"\n";
    return 0;
}