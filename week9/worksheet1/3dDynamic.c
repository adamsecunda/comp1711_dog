#include <stdio.h>
#include <stdlib.h>


int main(){
    int x,y,z;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);
    int*** a = (int***) malloc(x * sizeof(int**));
    printf("{");
    for(int i =0; i<x; i++){
        printf("{");
        a[i] = (int**) malloc(y * sizeof(int*));
         for(int j =0; j<y; j++){
            printf("{");
            a[i][j] = (int*) malloc(z * sizeof(int));
            for(int k = 0; k < z; k++){
                a[i][j][k] = 1;
                printf("%d",a[i][j][k]);
                if(k != z-1){
                    printf(",");
                }
            }
            printf("}");
            if(j != y-1){
                printf(",");
            }
         }
         printf("}");
         if(i != x-1){
            printf(",");
         }
    }
    printf("}\n");
    for(int i = 0; i<x; i++){
        free(a[i]);
    }
    return 0;
}