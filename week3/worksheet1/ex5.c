#include <stdio.h>


int main(){
    int food;
    printf("Please pick a main course:\n1 - Lamb Shank\n2 - Calves Liver\n3 - Margaritta Pizza\n4 - Mushroom Risotto\n5 -Spaghetti Carbonara\n");
    scanf("%d", &food);
    
    switch(food){
        case 1:
            printf("Selected Lamb Shank\n");
            break;
        case 2:
            printf("Selected Calves Liver\n");
            break;
        case 3:
            printf("Selected Margaritta Pizza\n");
            break;
        case 4:
            printf("Selected Mushroom Rissoto\n");
            break;
        case 5:
            printf("Selected Spaghetti Carbonara\n");
            break;
        default:
            printf("Invalid option!\n");
    }
    return 0;
}