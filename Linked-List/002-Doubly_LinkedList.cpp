#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class node{
    public:
        T data;
        node<T>* next;
        node<T>* prev;

    public:
        node() : data(T()), next(nullptr), prev(nullptr) {
        }

        node(T data):data(data), next(nullptr), prev(nullptr){

        }

        node(T data, node<T>* next, node<T>* prev):data(data), next(next), prev(prev){

        }

};

template <typename T>
class DoublyLinkedList: node<T>{
    private:
        node<T>* head = nullptr;

    public:
    // Array to DLL
    void Arr_to_DLL(const vector<T>& arr){
        size_t n = arr.size();

        if(n<=0) return;

        head = new node<T>(arr[0]);

        node<T>* mover = head;
        for(size_t i=1; i<n; i++){
            node<T>* newNode = new node<T>(arr[i], nullptr, mover);

            mover->next = newNode;
            mover = newNode;
        }
    }

    //traverse the DLL
    void traverse(){
        if(head == nullptr) return;

        node<T>* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }

        cout<<endl;
    }

    //Deletion
    void removeHead(){
        if(head == nullptr) return;

        if(head->next != nullptr){
            node<T>* temp = head;
            head = head->next;
            head->prev = nullptr;
            delete temp;
        }
        else{
            delete head;
        }
    }

    void removeTail(){
        if(head == nullptr) return;

        node<T>* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->prev->next = nullptr;
        temp->prev = nullptr;
        delete temp;
    }

    void remove_by_index(int idx){

        if(head == nullptr) return;

        if(idx==1){
            node<T>* temp = head;
            head = head->next;
            head->prev = nullptr;
            delete temp;
            return;
        }

        int count = 0;

        node<T>* temp = head;
        while(temp != nullptr){
            count++;
            if(count == idx){
               temp->prev->next = temp->next;
               temp->next->prev = temp->prev;
               temp->prev = nullptr;
               temp->next = nullptr;
               delete temp;
               break;
            }

            temp = temp->next;
        }
    }

    void remove_by_value(T val){
        if(head == nullptr) return;

        node<T>* temp = head;
        while(temp != nullptr){

            if(temp->data == val){
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                temp->prev = nullptr;
                temp->next = nullptr;
                delete temp;
                break;
            }

            temp = temp->next;
        }
    }

    //insertion
    void insertHead(T data){
        node<T>* newNode = new node<T>(data, head, nullptr);

        head->prev = newNode;
        head = newNode;
    }

    void insertTail(T data){
        
        node<T>* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }

        node<T>* newNode = new node<T>(data, nullptr, temp);
        temp->next = newNode;
    }
    
    void insert_by_index(int idx, T data){

        node<T>* temp = head;
        int count = 0;
        while (temp != nullptr){
            count++;
            
            if(count == idx){
                node<T>* newNode = new node<T>(data, temp, temp->prev);
                temp->next->prev = newNode;
                temp->prev->next = newNode;
            }

            temp = temp->next;
        }
        
    }
};


int main(){

    vector<int> arr = {3, 5, 7, 1, 8, 2, 9, 3, 6, 4, 9};

    DoublyLinkedList<int> DLL;

    DLL.Arr_to_DLL(arr);
    DLL.traverse();

    cout<<"\nDeletion operation\n";

    DLL.removeHead();
    DLL.traverse();

    DLL.removeTail();
    DLL.traverse();

    DLL.remove_by_index(4);
    DLL.traverse();

    DLL.remove_by_value(7);
    DLL.traverse();

    cout<<"\nInsertion operations\n";

    DLL.insertHead(3);
    DLL.traverse();

    DLL.insertTail(9);
    DLL.traverse();

    DLL.insert_by_index(4, 8);
    DLL.traverse();

    return 0;
}