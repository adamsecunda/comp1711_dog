#include <stdio.h>

int main(){
    int var = 0x42;
    //* is for a pointer and & is for the address
    int *ptr = &var;

    int ptr[2] = {0x42, 0x19};
    printf("%0x", ptr);
    printf("%0x", *ptr);

    
    int N = 10;
    int array [N];

    return 0;
}