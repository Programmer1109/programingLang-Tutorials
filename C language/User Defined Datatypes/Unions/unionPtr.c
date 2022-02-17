#include<stdio.h>
#include<stdlib.h>

// Union with Pointer
union player{
    int age;
    char name[50];
    int jerseyNo;
};

int main(){
    union player footballer1;
    union player footballer2;
    union player* footballer;
    footballer = &footballer1;
    gets((*footballer).name);
    footballer = &footballer2;
    (*footballer).age = 30;
    printf("OUTPUT:-\n");
    footballer = &footballer1;
    printf("Footballer's Details:-\n\tname = %s  age = %d  jersey No. = %d\n", (*footballer).name, (*footballer).age, (*footballer).jerseyNo);
    footballer = &footballer2;
    printf("Footballer's Details:-\n\tname = %s  age = %d  jersey No. = %d\n", footballer->name, footballer->age, footballer->jerseyNo);
    return 0;
}
