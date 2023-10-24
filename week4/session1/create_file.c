#include <stdio.h>

int main () {
    char* filename = "data.txt";
    FILE *file = fopen (filename, "a+"); // or "a", "w+", "a+"
    if (file == NULL) {
        perror("Error opening file\n");
        return 1;
    }
    fprintf(file, "Hello world!\n");
    fclose(file);
    return 0;
}