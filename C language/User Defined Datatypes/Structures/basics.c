#include<stdio.h>
#include<stdlib.h>

// Structure Basic
struct player{
    int age;
    char name[50];
    int jerseyNo;
};

int main(){
    struct player footballer1;
    struct player footballer2;
    int size=50;
    //Enter details for player 1
    printf("Enter details:-");
    printf("\n\tName:- ");
    fflush(stdin);
    gets(footballer1.name);
    printf("\tAge:- ");
    scanf("%d", &footballer1.age);
    printf("\tJersey No.:- ");
    scanf("%d", &footballer1.jerseyNo);
    //Enter details for player 2
    printf("\nEnter details:-");
    printf("\n\tName:- ");
    fflush(stdin);
    gets(footballer2.name);
    printf("\tAge:- ");
    scanf("%d", &footballer2.age);
    printf("\tJersey No.:- ");
    scanf("%d", &footballer2.jerseyNo);

    printf("Output:-");
    printf("\n\tName:- %s   Age:- %d   Jersey No.:- %d", footballer1.name, footballer1.age, footballer1.jerseyNo);
    printf("\n\tName:- %s   Age:- %d   Jersey No.:- %d", footballer2.name, footballer2.age, footballer2.jerseyNo);

    return 0;
}
