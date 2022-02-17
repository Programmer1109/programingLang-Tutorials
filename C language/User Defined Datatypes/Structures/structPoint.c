#include<stdio.h>
#imclude<stdlib.h>

// Structures with Pointer
struct player{
    int age;
    char name[50];
    int jerseyNo;
};

int main(){
    struct player footballer1;
    struct player footballer2;
    struct player* footballer;
    // Pointer points to footballer 1
    footballer = &footballer1;
    //Enter details for player 1
    printf("Enter details:-");
    printf("\n\tName:- ");
    fflush(stdin);
    gets((*footballer).name);
    printf("\tAge:- ");
    scanf("%d", &(*footballer).age);
    printf("\tJersey No.:- ");
    scanf("%d", &(*footballer).jerseyNo);
    // Pointer points to footballer 2
    footballer = &footballer2;
    //Enter details for player 2
    printf("\nEnter details:-");
    printf("\n\tName:- ");
    fflush(stdin);
    gets(footballer->name);
    printf("\tAge:- ");
    scanf("%d", &footballer->age);
    printf("\tJersey No.:- ");
    scanf("%d", &footballer->jerseyNo);

    printf("Output:-");
    footballer = &footballer1;
    printf("\n\tName:- %s   Age:- %d   Jersey No.:- %d", (*footballer).name, (*footballer).age, (*footballer).jerseyNo);
    footballer = &footballer2;
    printf("\n\tName:- %s   Age:- %d   Jersey No.:- %d", footballer->name, footballer->age, footballer->jerseyNo);

    return 0;
}
