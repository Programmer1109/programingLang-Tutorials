#include<stdio.h>
#include<stdlib.h>

// Union Basics
union player{
    int age;
    char name[50];
    int jerseyNo;
};

int main(){
    union player footballer1;
    union player footballer2;
    gets(footballer1.name);
    footballer2.age =30;
    printf("Size of Player = %d\n", sizeof(union player));
    printf("Footballer's Details:-\n\tname = %s  age = %d  jersey No. = %d\n", footballer1.name, footballer1.age, footballer1.jerseyNo);
    printf("Footballer's Details:-\n\tname = %s  age = %d  jersey No. = %d\n", footballer2.name, footballer2.age, footballer2.jerseyNo);
    return 0;
}
