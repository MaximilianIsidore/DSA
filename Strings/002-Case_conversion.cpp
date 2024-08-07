#include<string>
#include <iostream>
using namespace std;

string to_lower(string s){

    int mover = 'a'-'A';

    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i]+mover;
        }
        
    }

    return s;
}

string to_upper(string s){
    
    int mover = 'A'-'a';
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i] = s[i]+mover;
        }
    }

    return s;
}

int main(){

    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    cout<<endl;        

    cout<<to_lower(s)<<endl;
    cout<<to_upper(s)<<endl;
}