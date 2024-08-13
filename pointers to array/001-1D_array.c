#include<stdio.h>

int main(){

    //int *arr[5] = {1,2,3,4,5}; error: invalid conversion from 'int' to 'int*'

    //this pointer array can be used to store addresses
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    int *arr[5] = {&a, &b, &c, &d, &e};//it decays to int *(*)[5]

    //arr-> address of first element i.e &arr[0]
    //arr decays to the pointer of type int*

    //&arr -> address of whole array
    //&arr decays to the pointer of type int (*)[5]
    //generally both prints the same address but the representation is different
    printf("address of arr: %p , &adress of variable arr: %p", arr, &arr);
    
    //doing arr++ is impossible , because arr is of type array and array address cannot be changed
    // int a[], int b[],  assigning a = b will also cause error.

    printf("\n \n");
    printf("array of pointers to int \n");
    for(int i=0;i<5; i++){
        printf("%p: %d ",arr[i], *arr[i]);
    }

    printf("\n\n");
    printf("normal array\n");
    int ar[5] = {1,2,3,4,5};

    for(int i=0;i<5; i++){
        printf("%d ", ar[i]);
    }

    printf("\n\n");
    printf("pointer to an array of int of size 5 \n");
    int (*ptrAr1)[5];//it's of the type of int (*)[5], assining it with &ar should work
    ptrAr1 = &ar;

    printf("%p ", ptrAr1);//prints address of ar
    printf("%p ", *ptrAr1);//prints address of ar[0]
    printf("%d ", **ptrAr1);//prints value at ar[0]
    printf("\n");
    for(int i=0;i<5; i++){
       // printf("%d ", ptrAr1[i]);// prints random things, cuz ptrAr1[i] = *(ptrAr1 + 1), which will adding n*4 bytes to the ptrAr1
        printf("%d ", (*ptrAr1)[i]); //*ptrAr1 -> address of 1st element, (*ptrAr)[i] = *(1st add + i), just adds 4 bytes
    }

    printf("\n\n");
    printf("pointer to an array of pointer to int of size 5 \n");
    int *(*ptrAr2)[5];
    ptrAr2 = &arr;
    for(int i=0;i<5; i++){
        printf("%p: ", (*ptrAr2)[i]);
        printf("%d ", *(*ptrAr2)[i]);//*ptrAr2 -> address of 1st element
        //(*ptrAr2)[i] = *(1st address + i)-> value at i, i.e Some pointer variable value;
        // *(*ptrAr2)[i] = *(pointer value)-> value that pointer value it hold;
    }

    //using array subscript
    printf("\n\n");
    printf("some pointer operations on integer using array subscript[]\n");
    int *ptr1 = &a; //points to variable a
    int value = ptr1[1]; // equivalent to value = *(ptr+1), more likely to cause segementation fault

    printf("random value: %d", value);

    return 0;
}