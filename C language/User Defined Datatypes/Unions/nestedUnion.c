#include<stdio.h>
#include<stdlib.h>

// Nested Union
union name{
    char firstName[20];
    char lastName[20];
};
union Student{
    int roll_no;
    char div;
    union name fullName;
};

int main(){
    int sRoll;
    int sDiv;
    char fName[20];
    char lName[20];
    union Student S1;

    S1.roll_no = 2018;
    printf("\nUnion Details:-\n\tRoll No. = %d\n\tDivision = %c\n\tFirst Name = %s\n\tLast Name = %s\n", S1.roll_no, S1.div, S1.fullName.firstName, S1.fullName.lastName);
    sRoll = S1.roll_no;
    S1.div = 'B';
    printf("\nUnion Details:-\n\tRoll No. = %d\n\tDivision = %c\n\tFirst Name = %s\n\tLast Name = %s\n", S1.roll_no, S1.div, S1.fullName.firstName, S1.fullName.lastName);
    sDiv = S1.div;
    strcpy(S1.fullName.firstName, "Joao");
    printf("\nUnion Details:-\n\tRoll No. = %d\n\tDivision = %c\n\tFirst Name = %s\n\tLast Name = %s\n", S1.roll_no, S1.div, S1.fullName.firstName, S1.fullName.lastName);
    strcpy(fName, S1.fullName.firstName);
    strcpy(S1.fullName.lastName, "Cancelo");
    printf("\nUnion Details:-\n\tRoll No. = %d\n\tDivision = %c\n\tFirst Name = %s\n\tLast Name = %s\n", S1.roll_no, S1.div, S1.fullName.firstName, S1.fullName.lastName);
    strcpy(lName, S1.fullName.lastName);
    printf("\nUnion Details:-\n\tRoll No. = %d\n\tDivision = %c\n\tFirst Name = %s\n\tLast Name = %s\n", S1.roll_no, S1.div, S1.fullName.firstName, S1.fullName.lastName);
    printf("\nStudent Details:-\n\tRoll No. = %d\n\tDivision = %c\n\tFirst Name = %s\n\tLast Name = %s\n", sRoll, sDiv, fName, lName);

    return 0;
}
