#include <stdio.h>

int main(){
    int arr[5]  = {1,2,3,4,5};
    int i = 0;
    int temp = arr[i];
    for(i=1; i<5; i++){
        if(arr[i] > temp){
            temp = arr[i];
        }
    }
    printf("%d",temp);
    return 0;
}