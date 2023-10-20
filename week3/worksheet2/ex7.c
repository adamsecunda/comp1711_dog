#include <stdio.h>

void reverseArray(int* arr, int size);

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    reverseArray(arr,10);
    for(int i =0; i <10; i++){
        printf("%d",arr[i]);
    }
}

void reverseArray(int* arr, int size){
    int temp[size];
    for(int i =0; i < size; i++){
        temp[i] = *(arr+size-i);
    }
    for(int i = 0; i < size; i++){
        int * ptr = arr + i;
        *ptr = temp[i];
    }
}