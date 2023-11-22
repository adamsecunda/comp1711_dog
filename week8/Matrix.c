#include <stdio.h>


void transpose(int matrix[2][3], int transposed[3][2]);

int main(){
    int matrix[2][3] = {{1,2,3},
                        {4,5,6}};
    int transposed[3][2];
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
    return 0;
}

void transpose(int matrix[2][3], int transposed[3][2]){
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            transposed[i][j] = matrix[j][i];
        }
    }
}

