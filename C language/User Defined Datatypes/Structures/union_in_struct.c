#include<stdio.h>
#include<stdlib.h>

// Union within structure
union gender{
    char sex;
    char sexuality;
};

struct Student{
    int Roll_no;
    char Name[20];
    union gender Gen;
};

int main(){
    struct Student Anto;
    struct Student Becks;
    printf("Enter Student Details:-\n");
    printf("\tFull Name:- ");
    fflush(stdin);
    gets(Anto.Name);
    printf("\tRoll No.:- ");
    scanf("%d", &Anto.Roll_no);
    printf("\tSex(M/F/T):- ");
    fflush(stdin);
    scanf("%c", &Anto.Gen.sex);

    printf("Enter Student Details:-\n");
    printf("\tFull Name:- ");
    fflush(stdin);
    gets(Becks.Name);
    printf("\tRoll No.:- ");
    scanf("%d", &Becks.Roll_no);
    printf("\tSexuality(L/G/B):- ");
    fflush(stdin);
    scanf("%c", &Becks.Gen.sex);

    printf("\n\nEntered Details:-");
    printf("\n\tStudent Name:- %s\n\tRoll No.:- %d\n\tGender:- %c\n\tSexuality:- %c\n", Anto.Name, Anto.Roll_no, Anto.Gen.sex, Anto.Gen.sexuality);
    printf("\n\tStudent Name:- %s\n\tRoll No.:- %d\n\tGender:- %c\n\tSexuality:- %c\n", Becks.Name, Becks.Roll_no, Becks.Gen.sex, Becks.Gen.sexuality);
    return 0;
}
