#include <iostream>
#include <vector>
using namespace std;


class Complex{

    private:
        int real;
        int img;
    
    public:

        Complex(){};

        Complex(int real, int img){
            this->real = real;
            this->img = img;
        }

        Complex operator + (Complex c){

            Complex temp;

            temp.real = real + c.real;
            temp.img = img + c.img;

            return temp;
        }

        friend ostream& operator << (ostream& o, Complex c);
};

ostream& operator << (ostream& o, Complex c){

    cout<<c.real <<" + "<< c.img <<"i\n";
    return o;
}

int main(){

    Complex c1 = Complex(5, 6);
    Complex c2 = Complex(3,2);

    Complex c3;

    c3 = c1 + c2;

    cout<<"The imaginary number c3 is: "<<c3;

    return 0;
}