#include <iostream>
#include <string>
using namespace std;

class Bus{
    private:
        int no_of_wheels;
        string driver_name;

    public:
        void drive(){
            cout<<"The bus is driving"<<"\n";
        }

        void stop();
        void switchGears();

};

void Bus::stop(){
    cout<<"Applying brake \n";
}

inline void  Bus::switchGears(){
    cout<<"switching Gears \n";
}

int main(){

    Bus b1 = Bus();
    b1.drive();
    b1.switchGears();
    b1.stop();

    Bus().drive();

    return 0;
}