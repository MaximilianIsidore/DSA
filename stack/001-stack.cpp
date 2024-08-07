#include<iostream>
#include<vector>

using namespace std;

template <typename T>
class node{
    public:
        T data;
        node* next;

    public:
        node() : data(T()), next(nullptr) {
        }

        node(T data):data(data), next(nullptr){

        }

};

template <typename T>
class LinkedList: node<T>{
    private:
        node<T>* head ;
    
    public:
        T top_data{};

        LinkedList():head(nullptr){}

        void addElement(T el){
            node<T>* newNode = new node(el);
            top_data = el;
            if(head == nullptr){
                head = newNode;
                return;
            }
            
            node<T>* temp = head;

            while(temp -> next != nullptr){
                temp = temp -> next;
            }

            temp->next = newNode;
        }

        void removeElement(){
            if(head==nullptr) return;

            if(head->next == nullptr){
                delete head;
                head = nullptr;
                top_data = T();
                return;
            }

            node<T>* temp = head;

            while(temp->next->next != nullptr){
                temp = temp->next;
            }

            top_data = temp->data;
            delete temp->next;
            temp->next = nullptr;
        }

        
};


template <typename T>
class stack{
    private:
        size_t top = -1;
        LinkedList<T> st;
    
    public:
        size_t peek(){
            return (top>=0) ? top+1 : -1;
        }

        bool isEmpty(){
            return (top == -1);
        }

        void push(T el){
            st.addElement(el);
            top++;
        }

        void pop(){

            if(!isEmpty()){
                st.removeElement();
                if(top>=0) top--;
            }
            
        }

        T back(){
            return st.top_data;
        }

        void clear(){
            while(!isEmpty()){
                pop();
            }
        }

        ~stack(){
            clear();
        }
};

int main(){
    
    vector<string> arr = {"hello", "world", "this", "is", "my", "custom", "stack"};

    stack<string> st;

    cout<<st.back()<<" ";
    cout<<"\n";

    for(auto s : arr){
        st.push(s);
        cout<<st.peek()<<" ";
    }
    cout<<"\n";

    for(auto s : arr){
        cout<<st.back()<<" ";
        st.pop();
    }
    cout<<"\n";

    //edge cases
    cout<<st.back()<<" ";
    st.pop();


    return 0;
}