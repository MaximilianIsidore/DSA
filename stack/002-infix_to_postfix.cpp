#include<bits/stdc++.h>

using namespace std;

int precedence(char ch){

  if(ch == '+' || ch == '-'){
    return 1;
  }else if(ch == '*' || ch == '/'){
    return 2;
  }else if(ch == '^'){
    return 3;
  }

  return 0;

}



string infixToPostfix(string infix){
    stack<char> st;
    string result;

    for(int i=0; i<infix.size(); i++){
      char ch = infix[i];

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


    return result;
}

int main(){

  string infix;
  cout<<"Enter the infix Expression: ";
  getline(cin, infix);

  cout<<"\n The post Expression is : "<< infixToPostfix(infix)<<"\n";

  return 0;
}
