#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Matrix{

    private:
        vector<vector<int>> mat;
        int rows, cols;

    public:
        Matrix(int r, int c) : rows(r), cols(c) {
            mat.resize(r, vector<int>(c, 0)); // Initialize all elements to 0
        }

        Matrix operator * (Matrix& mat2){

            if( cols != mat2.rows){
                cout<<"matrices shapes mismatch\n";
                return;
            }

            Matrix temp(rows, mat2.cols);

            for(int i=0; i<rows; i++){
                for(int j=0; j<mat2.cols; j++){
                    for(int k = 0; k < mat2.rows; k++){
                        temp.mat[i][j] = mat[i][k] + mat2.mat[j][k];
                    }
                }
            }

            return temp;
        }
};


int main(){

    return 0;
}