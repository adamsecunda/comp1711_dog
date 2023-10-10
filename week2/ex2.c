#include <stdio.h>

int main(){
    int var1;
    int var2;
    printf("Enter two integers: ");
    scanf("%d%d", &var1, &var2);
    int total = var1+var2;
    printf("%d", total);
    return 0;
}