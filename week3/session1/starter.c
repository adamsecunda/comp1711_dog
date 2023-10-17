#include <stdio.h>
#include <stdbool.h>

int main(){
    bool jumper = false;
    bool coat = false;

    int temperature;
    printf("Enter the temperature: ");
    scanf("%d", &temperature);

    int jumperThreshold = 15;
    int coatThreshold = 10;
    
    if(temperature < jumperThreshold){
        jumper = true;
        if(temperature < coatThreshold){
            coat = true;
        }
    }

    if(coat){
        printf("Wear a coat\n");
    }
    if(jumper){
        printf("Wear a jumper\n");
    }
    if(!coat && !jumper){
        printf("No need for a coat or jumper\n");
    }
    return 0;
}