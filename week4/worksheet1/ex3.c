#include <stdio.h>
#include <stdlib.h>

int main(){
    int bufferLength = 128;
    char buffer[bufferLength];
    int size = 0;
    float total = 0;

    char* filename = "numbers.dat";
    FILE* file = fopen(filename,"a+");

    while(fgets(buffer, bufferLength, file)){
        char toConvert[bufferLength];
        for(int i =0; i< bufferLength; i++){
            if(buffer[i] == '\n'){
                break;
            }
            toConvert[i] = buffer[i];
        }
        total+=atof(toConvert);
        size+=1;
    }
    float avg = total / size;
    printf("%f\n%d\n%f\n",total,size,avg);
    fprintf(file, "%f\n", avg);
    fclose(file);
    return 0;
}