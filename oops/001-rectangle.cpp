#include<iostream>

using namespace std;

class Rectangle{

    private:
        int height;
        int width;
        char a;

    public:

        Rectangle(int height, int width) : height{height}, width {width}{}

        void area(){
            cout <<"Area: " << height * width <<"\n";
        }

        void perimeter(){
            cout<<"Perimeter: "<< 2 * (height + width) << "\n";
        }
};

int main(){

    cout<<"Size of class Rectange: " << sizeof(Rectangle)<<"\n"; // int 4 + 4, char 1 , padding 3 bytes, total = 12 bytes.

    Rectangle r1 = Rectangle(5,6); //stack
    r1.area();
    r1.perimeter();

    cout<<"Size of obj r1: " <<sizeof(r1)<<"\n";

    Rectangle *ptr;
    ptr = &r1;

    cout<<"address of obj r1: " << &r1 << ", Value in ptr: " << ptr<<"\n";
    (*ptr).area();
    ptr->perimeter();

    Rectangle *r2 = new Rectangle(2,3);//heap
    cout<<"address of obj r2: " << &r2 <<"\n";
    r2->area();
    r2->perimeter();

    cout<<"Size of pointer r2: " << sizeof(r2)<<"\n";
    cout<<"Size of obj r2: " << sizeof(*r2)<<"\n";


    return 0;
}