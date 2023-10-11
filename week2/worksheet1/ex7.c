#include <stdio.h>

int main(){
    float farenheit;
    //(°F − 32) × 5/9 = °C
    printf("Enter a temperature in °F: ");
    scanf("%f", &farenheit);
    float celsius = (farenheit - 32) * 5/9;
    printf("%f°F is equivalent to %f°C\n", farenheit, celsius);
    return 0;
}
