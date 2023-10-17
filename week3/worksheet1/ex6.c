#include <stdio.h>
#include <stdbool.h>

int main(){
    int num;
    bool terminated = false;
    while (!terminated){
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num == -1){
            terminated = true;
        }else if(num >0 && num <100){
             printf("%d is between 0 and 100.\n", num);
        }else{
            printf("%d is not between 0 and 100.\n", num);
        }
    }
    printf("Terminated\n");
    return 0;
}