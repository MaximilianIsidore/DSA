#include <iostream>

using namespace std;

//square
void pattern_1(int n){

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

//right triangle-*
void pattern_2(int n){

    for(int i=1; i<=n; i++){

        for(int j=1; j<=i; j++){
            cout<<"* ";
        }

        cout<<endl;
    }
}

//right triangle - numbers
void pattern_3(int n){

    for(int i=1; i<=n; i++){

        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }

        cout<<endl;
    }
}

//right triangle - number but same as row number
void pattern_4(int n){

    for(int i=1; i<=n; i++){

        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }

        cout<<endl;
    }
}

//inverted triangle - *
void pattern_5(int n){

    for(int i=1; i<=n; i++){

        for(int j=1; j<=(n-i+1); j++){
            cout<<"* ";
        }

        cout<<endl;
    }
}

//inverted triangle - numbers
void pattern_6(int n){

    for(int i=1; i<=n; i++){

        for(int j=1; j<=(n-i+1); j++){
            cout<<j<<" ";
        }

        cout<<endl;
    }
}

//pyramid
void pattern_7(int n){

    for(int i=1; i<=n; i++){
        //space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }

        //star
        for(int j=1; j<= 2*i-1; j++){
            cout<<"*";
        }

        //space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }

        cout<<endl;

    }
}

//inverted pyramid
void pattern_8(int n){

    for(int i=n; i>=1; i--){
        //space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }

        //star
        for(int j=1; j<= 2*i-1; j++){
            cout<<"*";
        }

        //space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }

        cout<<endl;

    }
}

//diamond
void pattern_9(int n){

    for(int i=1; i<=n; i++){
        //space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }

        //star
        for(int j=1; j<= 2*i-1; j++){
            cout<<"*";
        }

        //space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }

        cout<<endl;

    }

   

    for(int i=n; i>=1; i--){
        //space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }

        //star
        for(int j=1; j<= 2*i-1; j++){
            cout<<"*";
        }

        //space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }

        cout<<endl;

    }
}

void pattern_10(int n)
{
    for(int i=1; i<= 2*n-1; i++){
        int stars = i;
        if(i>n) stars = 2*n - i;

        for(int j=1; j<=stars; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }

}

void pattern_11(int n){

    for(int i=0; i<n; i++){
        int start;
        if(i%2 == 0) start = 1;
        else start = 0;

        for(int j=0; j<=i; j++){
            cout<<start<<" ";
            start = 1 - start;
        }

        cout<<endl;
    }
}

void pattern_12(int n){

    int space = 2* (n-1);

    for(int i=1; i<=n; i++){

        //num
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }

        //space
        for(int j=1; j<=space; j++){
            cout<<"  ";
        }
        //num
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }

        space -= 2;
        cout<<endl;
    }
}

void pattern_13(int n){

    int num = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<num++<<" ";
        }
        cout<<endl;

    }
}

void pattern_14(int n){

    for(int i=0; i<n; i++){
        for(char ch = 'A'; ch <= 'A' + i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern_15(int n){

    for(int i=0; i<n; i++){
        for(char ch = 'A'; ch <= 'A' + (n-i-1); ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern_16(int n){

    for(int i=0; i<n; i++){
        char ch = 'A' + i;

        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
        }

        cout<<endl;
    }
}

void pattern_17(int n){

    for(int i=0; i<n; i++){

        //space
        for(int j=0; j<n-i; j++){
            cout<<"  ";
        }

        //character
        char ch = 'A';
        int breakpoint = (2*i +1)/2;
        for(int j=1; j<= 2*i + 1; j++){

            cout<<ch<<" ";

            if(j <= breakpoint) ch++;
            else ch--;
            
        }

        cout<<endl;
    }
}

void pattern_18(int n){

    for(int i=0; i<n; i++){
        for(char ch = 'E' - i; ch<='E'; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern_19(int n){
    int spaces = 0;

    for(int i=0; i<n; i++){

        //stars
        for(int j=1; j<=n-i; j++){
            cout<<"* ";
        }

        //spaces
        for(int j=1; j<=spaces; j++){
            cout<<"  ";
        }
        spaces += 2;

        //stars
        for(int j=1; j<=n-i; j++){
            cout<<"* ";
        }

        cout<<endl;
    }

    spaces -= 2;
    for(int i=n-1; i>=0; i--){

        //stars
        for(int j=1; j<=n-i; j++){
            cout<<"* ";
        }

        //spaces
        for(int j=1; j<=spaces; j++){
            cout<<"  ";
        }
        spaces -= 2;

        //stars
        for(int j=1; j<=n-i; j++){
            cout<<"* ";
        }

        cout<<endl;
    }

    
}

void pattern_20(int n){

    int spaces = 2*n - 2;
    for(int i=1; i<=2*n -1; i++){

        int star = i;
        if(i>n) star = 2*n - i;
        //star
        for(int j=1; j<=star; j++){
            cout<<"* ";
        }

        //spaces
        for(int j=1; j<=spaces; j++){
            cout<<"  ";
        }
        if(i<n) spaces  -=2;
        else spaces += 2;

        //stars
        for(int j=1; j<=star; j++){
            cout<<"* ";
        }

        cout<<endl;
    }
}

void pattern_21(int n){

    for(int i=1; i<=n; i++){
        for(int j=1;j<=n; j++){

            if(i==1 || i==n || j==1 || j==n){
                cout<<"* ";
            }
            else cout<<"  ";
        }

        cout<<endl;
    }
}

void pattern_22(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int bottom = (2*n-2) - i;
            int left = j;
            int right = (2*n-2) - j;

            int distance = min(min(top, bottom), min(left, right));

            cout<<n-distance<<" ";
        }

        cout<<"\n";
    }
}

int main(){

    int n;
    cout<<"Enter the value for n:";
    cin>>n;
    
    pattern_1(n);
    cout<<endl;
    pattern_2(n);
    cout<<endl;
    pattern_3(n);
    cout<<endl;
    pattern_4(n);
    cout<<endl;
    pattern_5(n);
    cout<<endl;
    pattern_6(n);
    cout<<endl;
    pattern_7(n);
    cout<<endl;
    pattern_8(n);
    cout<<endl;
    pattern_9(n);
    cout<<endl;
    pattern_10(n);
    cout<<endl;
    pattern_11(n);
    cout<<endl;
    pattern_12(n);
    cout<<endl;
    pattern_13(n);
    cout<<endl;
    pattern_14(n);
    cout<<endl;
    pattern_15(n);
    cout<<endl;
    pattern_16(n);
    cout<<endl;
    pattern_17(n);
    cout<<endl;
    pattern_18(n);
    cout<<endl;
    pattern_19(n);
    cout<<endl;
    pattern_20(n);
    cout<<endl;
    pattern_21(n);
    cout<<endl;
    pattern_22(n);

    return 0;
}