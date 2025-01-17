#include<iostream>
#include<vector>

using namespace std;

void permutations(vector<int>& array,vector<int> ds, vector<vector<int>> & ans, vector<bool>& freq){

    if(ds.size() == array.size()){
        ans.push_back(ds);
        return;
    }

    for(int i=0; i<array.size(); i++){

        if(!freq[i]){
            freq[i] = true;
            ds.push_back(array[i]);
            permutations(array, ds, ans, freq);
            ds.pop_back();
            freq[i] = false;
        }
    }
}

vector<vector<int>> permutations(vector<int> array){
    int n = array.size();
    vector<bool> freq(n, false);
    vector<vector<int>> ans;
    vector<int> ds;

    permutations(array, ds, ans, freq);
    return ans;
}

int main(){

    vector<int> a = {1,2,3};
    vector<vector<int>> ans = permutations(a);

    for(auto arr : ans){
        for(auto el : arr){
            cout<<el<<" ";
        }
        cout<<"\n";
    }

    return 0;
}