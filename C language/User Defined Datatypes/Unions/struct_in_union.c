#include<stdio.h>
#include<stdlib.h>

// Structure within Union
struct date_of_birth{
    int month;
    int day;
    int year;
};
union Student{
    char name[25];
    struct date_of_birth dob;
};

int main(){
    union Student S1;
    printf("Enter Name of Student:- ");
    fflush(stdin);
    gets(S1.name);
    printf("\nStudent Details:-\n");
    printf("\tStudent Name:- %s\n\tDate of Birth:- %d/%d/%d\n", S1.name, S1.dob.month, S1.dob.day, S1.dob.year);
    printf("Enter Date of Birth(MM/DD/YYYY):-\n");
    scanf("%d", &S1.dob.month);
    scanf("%d", &S1.dob.day);
    scanf("%d", &S1.dob.year);
    printf("\nStudent Details:-\n");
    printf("\tStudent Name:- %s\n\tDate of Birth:- %d/%d/%d\n", S1.name, S1.dob.month, S1.dob.day, S1.dob.year);
    return 0;
}
