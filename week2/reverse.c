#include <stdio.h>

int main(){
    char toReverse [4];
    scanf("%s", toReverse);
    for(int i = 3; i>-1; i--){
        printf("%c", toReverse[i]);
    }
    return 0;
}