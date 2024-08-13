#include <stdio.h>

int main(){

    int matrix[3][4] = { {1,2,3,4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12}};

    //prints same address
    printf("%p ", &matrix); //it of type int (*)[3][4]
    printf("%p ", matrix);//decays to type int (*)[3]

    printf("\n\n");
    printf("Printing row adrress of matrix\n");
    for(int i=0; i<3; i++){
        printf("%p ", matrix[i]); //base address + 16 or 0x10(hex)
    }

    printf("\n\n");
    printf("Printing values by row adrress of matrix with dereferencing \n");

    printf("\n\n");
    printf("prints matrix[i][0] values\n");
    for(int i=0; i<3; i++){
        printf("%d ", *(matrix)[i]); // prints matrix[i][0] values
    }

    printf("\n\n");
    printf("prints matrix[0][j] values\n");
    for(int i=0; i<3; i++){
        printf("%d ", (*matrix)[i]); // prints matrix[0][i] values
    }


    printf("\n\n");
    printf("Printing values using Pointer to the 2d matrix\n");
    int (*ptr)[3][4];

    ptr = &matrix;

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d ", (*ptr)[i][j]);// (ptr) of type int (*)[i][j]
            //(*ptr) of type int (*)[j]
            //(*ptr)[i] = *(row array + i), moves row by i*sizeof(int) bytes i.e moves by row
            //(*ptr)[i][j] = *(*(row array + i) + j) => *(add of row[0] + j) => *(add of el at [i][j]) => value at [i][j]
        }
    }
    
    return 0;
}