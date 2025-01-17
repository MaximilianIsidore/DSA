#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int>& arr, int low, int high, int target){

    if(low > high) return -1;

    int mid = low + (high - low)/2;

    if(arr[mid] == target) return mid;
    else if(target < arr[mid]) return binary_search(arr, low, mid-1, target);
    else return binary_search(arr, mid+1, high, target);

}

int main(){

    vector<int> a = {1,2,3,5,6,7,8,9};
   
    int low = 0;
    int high = a.size()-1;
    int f = 5;
    int idx = -1;

    while(low<high){
        int mid = low + (high - low)/2;
        if(a[mid] == f) {
            idx = mid;
            break;
        }
        else if(f < a[mid]) high = mid-1;
        else if(f > a[mid]) low = mid+1;
    }

    cout<<idx<<"\n";
    cout<<binary_search(a, low,high, f)<<"\n";

    return 0;
}