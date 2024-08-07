#include <iostream>
#include <limits>
#include <string>

using namespace std;
int main(){

    char s1[5] = {'H', 'E', 'L', 'L', 'O'};//no terminating character \O

    cout<<s1<<"\n";
    
    cout<<"----------\n";
    char s2[5];
    cout<<"Enter a String:";//Enter a string of size >4 and buffer overflow happens.
    cin>>s2;
    cout<<"\n";
    cout<<s2<<"\n";

    // Clear the input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');// newline character causes error in cin so clear the input buffer

    cout<<"----------\n";

    cout<<"Enter a string:";
    cin.get(s2,5);//limit the input size being taken
    cout<<"\n";
    cout<<s2<<"\n";

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //using char*
    cout<<"----------\n";
    char* s3 = new char[100]; // if you dont allocate memory the program will terminate
    cout<<"Enter a String:";//Enter a string of size >4 and buffer overflow happens.
    cin.getline(s3,100);//get teriminates after space, getline gets the whole line
    cout<<"\n";
    cout<<s3<<"\n";

    //using string
    cout<<"----------\n";
    string s4;
    cout<<"Enter a string:";
    getline(cin,s4);
    cout<<"\n";
    cout<<s4<<"\n";




    return 0;

}