#include <iostream>
using namespace std;



class Base{

    private:
        int a = 5;

    public:
        Base(){
            cout<<"Base class default constructor\n";
        }

        Base(int b){
             cout<<"Base class parameterized constructor, value: " <<b<<"\n";
        }
};

class Derived: Base{

    private:
        int a = 5;

    public:
        Derived(){
            cout<<"Derived class default constructor\n";
        }

        Derived(int b){
             cout<<"Derived class parameterized constructor, value: " <<b<<"\n";
        }
};


int main(){

    Base b;
    cout<<"Base class size: " << sizeof(b)<<endl;

    Derived d;
    cout<<"Derived class size: "<< sizeof(d)<<endl;

    return 0;
}