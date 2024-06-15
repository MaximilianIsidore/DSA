#include <iostream>
#include <vector>

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

        node(T data, node* next):data(data), next(next){

        }

};

template <typename T>
class SinglyLinkedList: node<T>{
    private:
        node<T>* head = nullptr;

    public:
        // convert an array to Linked List
        void Arr_to_LL(const vector<T>& arr){
            size_t n = arr.size();
            if(n<=0) return;
            
            head = new node(arr[0]);
            node<T>* mover = head;

            for(size_t i=1; i<arr.size(); i++){
                node<T>* newNode = new node(arr[i]);
                mover->next = newNode;
                mover = newNode;
            }
        }

        //Travese the linked list
        void traverse(){
            if(head == nullptr) return;

            node<T>* temp = head;
            while(temp != nullptr){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }

        //Length of the linked list
        size_t length(){
            if(head == nullptr) return 0;

            int len = 0;
            node<T>* temp = head;
            while(temp != nullptr){
                len++;
                temp = temp->next;
            }

            return len;
        }

        //Search element
        bool search_element(T val){
            if(head == nullptr) return false;

            node<T>* temp = head;
            while(temp != nullptr){
                if(temp->data == val ){
                    return true;
                }
                temp = temp->next;
            }

            return false;
        }

        //Deletion
        void remove_head(){
            node<T>* temp = head;
            head = head->next;
            delete temp;
        }

        void remove_tail(){
            if(head == nullptr) return;
            if(head->next == nullptr){
                delete head;
                head = nullptr;
            }

            node<T>* temp = head;
            while(temp->next->next != nullptr){
                temp = temp->next;
            }

            delete temp->next;
            temp->next = nullptr;
        }

        void remove_by_index(int idx){
            if(head == nullptr) return;

            node<T>* temp = head;
            if(idx == 1){
                head = head->next;
                delete temp;
                return;
            }

            int count = 1;
            node<T>* previous = nullptr;

            while(temp != nullptr){
               
                if(count == idx){
                    previous->next = previous->next->next;
                    delete temp;
                    break;
                }

                count++;
                previous = temp;
                temp = temp->next;
            }
        }

        void remove_by_value(T val){
            if(head == nullptr) return;

            node<T>* temp = head;
            if(head->data == val){
                head = head->next;
                delete temp;
                return;
            }

            node<T>* previous = nullptr;

            while(temp != nullptr){
                
                if(temp->data == val){
                    previous->next = previous->next->next;
                    delete temp;
                    break;
                }

                previous = temp;
                temp = temp->next;
            }
        }

        //Insertion
        void insert_head(T data){
            node<T>* newNode = new node(data, head);
            head = newNode;
        }

        void insert_tail(T data){
            node<T>* newNode = new node(data);
            if(head == nullptr){
                head = newNode;
                return;
            }

            node<T>* temp = head;
            while(temp->next != nullptr){
                temp = temp->next;
            }

            temp->next = newNode;
        }

        void insert_by_index(int idx, T val){
           

            if(idx == 1 || head == nullptr){
                node<T>* newNode = new node(val, head);
                head = newNode;
                return;
            }

            int count = 1;

            node<T>* temp = head;
            while(temp != nullptr){

                if(count == (idx-1)){
                    node<T>* newNode = new node(val, temp->next);
                    temp->next = newNode;
                    break;
                }
                count++;
                temp = temp->next;
            }

        }

        void insert_before_value(T val, T data){
            if(head == nullptr) return;

            if(head->data == val){
                node<T>* newNode = new node(data, head);
                head = newNode;
                return;
            }

            node<T>* temp = head;
            while(temp->next != nullptr){
                
                if(temp->next->data == val){
                    node<T>* newNode = new node(data, temp->next);
                    temp->next = newNode;
                    break;
                }

                temp = temp->next;
            }
        }
};

int main(){

    vector<int> arr = {3, 5, 7, 1, 8, 2, 9, 3, 6, 4, 9};

    SinglyLinkedList<int> SLL;

    SLL.Arr_to_LL(arr);
    SLL.traverse();

    cout<<"Length of LL: "<<SLL.length()<<"\n";
    cout<<"is element found: "<<SLL.search_element(9)<<"\n";
    
    cout<<"\n Deleting operations\n";
    SLL.remove_head();
    SLL.traverse();

    SLL.remove_tail();
    SLL.traverse();
    
    SLL.remove_by_index(3);
    SLL.traverse();

    SLL.remove_by_value(9);
    SLL.traverse();

    cout<<"\n Insertion operations\n";
    SLL.insert_head(3);
    SLL.traverse();

    SLL.insert_tail(9);
    SLL.traverse();
    
    SLL.insert_by_index(3,1);
    SLL.traverse();

    SLL.insert_before_value(9, 5);
    SLL.traverse();

    return 0;
}