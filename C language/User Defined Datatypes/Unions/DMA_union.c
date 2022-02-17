#include<stdio.h>
#include<stdlib.h>

// Dynamic Memory Allocation of Union
union player{
    int age;
    char name[50];
    int jerseyNo;
};

int main(){
    union player* footballer1;
    union player* footballer2;

    footballer1 = (union player*) malloc(sizeof(union player));
    if (footballer1 == NULL){
        printf("Error:- Running out of Memory!!!");
        exit(0);
    }
    printf("Enter footballer name:- ");
    gets((*footballer1).name);

    footballer2 = (union player*) malloc(sizeof(union player));
    if (footballer2 == NULL){
        printf("Error:- Running out of Memory!!!");
        exit(0);
    }
    (*footballer2).age = 30;

    printf("OUTPUT:-\n");
    printf("Footballer's Details:-\n\tname = %s  age = %d  jersey No. = %d\n", (*footballer1).name, (*footballer1).age, (*footballer1).jerseyNo);
    printf("Footballer's Details:-\n\tname = %s  age = %d  jersey No. = %d\n", footballer2->name, footballer2->age, footballer2->jerseyNo);

    free(footballer1);
    free(footballer2);
    return 0;
}
