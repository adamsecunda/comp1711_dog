#include <stdio.h>

float sum(int, float);

void foo(){
    printf("hello\n");
}

int main () 
{
    float y;
    printf("Enter a number: ");
    scanf("%f", &y);
    float z = sum(5, y); // calling our new function
    printf ("The sum of 5 and %f is %0.2f\n", y, z);
    foo();
}

float sum (int a, float b)
{
    return a+b;
}