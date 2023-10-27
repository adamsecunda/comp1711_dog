#include <stdio.h>

struct student{
    char name[20];
    char student_id [11];
    unsigned mark;
};

typedef struct{
    char name[20];
    char student_id [11];
    unsigned mark;
}STUDENT;


int main(){
    struct student s = {"Foo Bar", "1234564", 22};
    printf("%s\n", (s.name));
    STUDENT ss = {"Foo Bar", "1234564", 22};
    printf("%s\n", ss.name);
    return 0;
}