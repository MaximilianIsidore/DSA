#include <iostream>
#include <string>
#include <math.h>

using namespace std;

string reverse(string s){

    int n = s.size();
    for(int i=0; i<ceil(n/2); i++){
        
        char temp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = temp;

    }

    return s;
}
int main(){

    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    cout<<endl;

    cout<<reverse(s)<<endl;

    return 0;
}