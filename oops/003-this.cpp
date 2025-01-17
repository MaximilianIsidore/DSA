#include <iostream>
#include <string>
using namespace std;

class Shape{
    private:
        string type;
    
    public:
        Shape(string type){
            this->type = type;
        }

        void printType(){
            cout<<type;
        }

        void whatsInThis(){
            cout<<"this holds : " << this <<"\n";
            cout<<"Size of this: " << sizeof(this) <<"\n";
        }
};

int main(){
    Shape s1 = Shape("circle");
    s1.printType();

    cout<<"Size of Shape: "<<sizeof(s1)<<"\n";// size taken by the metadaata of string (usally 24 to 32 bytes)
    s1.whatsInThis();

    return 0;
}