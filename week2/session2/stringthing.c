#include <stdio.h>

int main(){
    char string[6] = {'H', 'e', 'l', 'l', 'o'};
    for(int i = 5; i >=-1; i--){
        printf("%c",string[i]);
    }
    return 0;
}