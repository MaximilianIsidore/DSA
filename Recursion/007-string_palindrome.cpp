#include <iostream>
//#include <limits>
#include <string>

using namespace std;

bool str_palindrome(const string& str, int n, int i=0){

    if(i>=n-1) return true;

    if(str[i] != str[(n-1) - i]) return false;

    return str_palindrome(str,i+1,n);
}

bool str_palindrome(const string & str){
    return str_palindrome(str, str.length());
}

int main(){

    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<"\n";

    if(str_palindrome(str)) cout<<"palindrome\n";
    else cout<<"not palindrome\n";
    return 0;
}