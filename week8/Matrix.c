#include <stdio.h>


void transpose(int matrix[2][3], int transposed[3][2]);
void multiply(int matrix[2][3], int transposed[3][2], int multiplied[2][2]);

int main(){
    int matrix[2][3] = {{1,2,3},
                        {4,5,6}};
    int transposed[3][2];
    int multiplied [2][2];
    transpose(matrix,transposed);
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d ",transposed[i][j]);
        }
        printf("\n");
    }
    multiply(matrix,transposed,multiplied);
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ",multiplied[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void transpose(int matrix[2][3], int transposed[3][2]){
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            transposed[i][j] = matrix[j][i];
        }
    }
}

void multiply(int matrix[2][3], int transposed[3][2], int multiplied[2][2]){
    int dotProduct = 0;
    for(int i=0;i<2; i++){
        for(int r=0; r<2; r++){
            for(int j=0;j<3;j++){
                dotProduct += (matrix[i][j] * transposed[j][r]);
            }
            multiplied[i][r] = dotProduct;
            dotProduct = 0;
        }
    }
}