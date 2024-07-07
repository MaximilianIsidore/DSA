#include <iostream>

using namespace std;
void print_n_times(const std::string str, int n){

    if(n>1) {
        print_n_times(str, n-1);
    }

    cout<<n<<"->"<<str<<"\n";
}

int main(){

    print_n_times("Hello", 5);
    return 0;
}