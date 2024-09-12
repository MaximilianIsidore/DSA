#include<bits/stdc++.h>

using namespace std;

int precedence(char ch){

  if(ch == '+' || ch == '-'){
    return 1;
  }else if(ch == '*' || ch == '-'){
    return 2;
  }else if(ch == '^'){
    return 3;
  }

  return 0;

}



string infixToPrefix(string prefix){
    stack<char> st;
    reverse(prefix.begin(), prefix.end());
    string result;

    for(int i=0; i<prefix.size(); i++){
      char ch = prefix[i];

      if(isalpha(ch)){
        result += ch;

      }else if(ch == '('){
        st.push('(');

      }else{

        if(ch == ')'){

          while(!st.empty() && st.top() != '('){
            result += st.top();
            st.pop();
          }
          st.pop();
        }else{
            while(!st.empty() && precedence(st.top()) >= precedence(ch)){
              result += st.top();
              st.pop();
            }

            st.push(ch);

        }

      }

    }

    while(!st.empty()){
              result += st.top();
              st.pop();
    }

    reverse(result.begin(), result.end());
    return result;
}

int main(){

    string prefix;
    cout<<"Enter the infix Expression: ";
    getline(cin, prefix);

    cout<<"\n The post Expression is : "<< infixToPrefix(prefix)<<"\n";


    return 0;
}