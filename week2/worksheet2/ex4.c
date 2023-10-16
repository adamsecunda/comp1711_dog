#include <stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int pos[5] = {};
    int new[5] = {};
    
    for (int i = 0; i <5; i++){
        int newIndex = (i+1)%5;
        pos[i] = newIndex;

    }
    for(int i = 0; i <5; i++){
        new[pos[i]] = arr[i];
    }
    for(int i = 0; i<5; i++){
        arr[i] = new[i];
        printf("%d\n", arr[i]);
    }

    return 0;
}