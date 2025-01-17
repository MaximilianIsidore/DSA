#include<iostream>
#include<vector>
#include<string>

using namespace std;

void string_sub_seq(string& str, string seq,vector<string>& output, int n){
    if(n == str.length()){
        output.push_back(seq);
        return;
    }

    string_sub_seq(str,seq, output, n+1);
    string_sub_seq(str,seq+str[n], output, n+1);
}

vector<string> string_sub_seq(string str){
    vector<string> output;

    string_sub_seq(str,"", output, 0);

    return output;
}
int main(){

    string str= "abc";
    vector<string> output = string_sub_seq(str);

    for(string s : output){
        cout<<s<<"\n";
    }


    return 0;
}