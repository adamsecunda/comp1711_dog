#include <stdio.h>
#include <stdlib.h>

int main(){
    int l;
    char string[100];
    printf("Enter a string: ");
    scanf("%s", string);
    for(l = 0; string[l] != '\0'; ++l);
    char* newArray = (char*) malloc (sizeof(char) * l+1);
    for(int i = 0; i<l; i++){
        newArray[i] = string[i];
    }
    printf("%s\n", newArray);
    free(newArray);
    return 0;
}