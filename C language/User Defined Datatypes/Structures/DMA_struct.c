#include<stdio.h>
#include<stdlib.h>

// Dynamic Memory Allocation of Structure
struct player{
    int age;
    char name[50];
    int jerseyNo;
};

int main(){
    struct player* footballer1;
    struct player* footballer2;

    // Pointer points to footballer 1
    footballer1 = (struct player*) malloc(sizeof(struct player));
    if(footballer1 == NULL){
        printf("Error:- Running out of Memory!!!");
        exit();
    }
    //Enter details for player 1
    printf("Enter details:-");
    printf("\n\tName:- ");
    fflush(stdin);
    gets((*footballer1).name);
    printf("\tAge:- ");
    scanf("%d", &(*footballer1).age);
    printf("\tJersey No.:- ");
    scanf("%d", &(*footballer1).jerseyNo);

    // Pointer points to footballer 2
    footballer2 = (struct player*) malloc(sizeof(struct player));
    if(footballer2 == NULL){
        printf("Error:- Running out of Memory!!!");
        exit();
    }
    //Enter details for player 2
    printf("\nEnter details:-");
    printf("\n\tName:- ");
    fflush(stdin);
    gets(footballer2->name);
    printf("\tAge:- ");
    scanf("%d", &footballer2->age);
    printf("\tJersey No.:- ");
    scanf("%d", &footballer2->jerseyNo);

    printf("Output:-");
    printf("\n\tName:- %s   Age:- %d   Jersey No.:- %d", (*footballer1).name, (*footballer1).age, (*footballer1).jerseyNo);
    printf("\n\tName:- %s   Age:- %d   Jersey No.:- %d", footballer2->name, footballer2->age, footballer2->jerseyNo);

    free(footballer1);
    free(footballer2);

    return 0;
}
