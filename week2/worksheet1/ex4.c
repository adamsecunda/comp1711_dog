#include <stdio.h>

int main(){
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float area = radius*radius*3.14159;
    printf("The area of the circle is approximately %f\n", area);
    return 0;
}