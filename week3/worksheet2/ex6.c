#include <stdio.h>


float calc(float x, float y, char operator);

int main(){
    float x;
    float y;
    char operator;
    printf("Enter a number: ");
    scanf("%f", &x);
    printf("Enter an operation: ");
    scanf(" %c", &operator);
    printf("Enter a number: ");
    scanf("%f", &y);
    float result = calc(x,y, operator);
    printf("The result of %f%c%f is %f.\n", x,operator,y,result);
    return 0;
}

float calc(float x, float y, char operator){
    switch(operator){
        case '/':
            return x / y;
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        default:
            return -1;
    }
}