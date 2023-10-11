#include <stdio.h>

int main(){
    int var1 = 1;
    int var2 = 2;
    int temp = var1;
    var1 = var2;
    var2 = temp;
    printf("%d %d\n",var1, var2);
    return 0;
}