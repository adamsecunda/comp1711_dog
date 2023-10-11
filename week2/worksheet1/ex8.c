#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int factorial = num;
    if(num > 0){
        for(int i = num-1; i>0; i--){
            factorial = factorial*i;
        }
    }else if (num < 0){
        printf("The factorial of %d is undefined", num);
        return 0;
    }else{
        factorial = 1;
    }
    printf("The factorial of %d is %d", num, factorial);
    return 0;
}