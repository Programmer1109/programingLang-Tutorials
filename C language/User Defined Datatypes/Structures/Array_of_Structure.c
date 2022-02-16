#include<stdio.h>
#include<stdlib.h>

// Array of Structure
struct friends{
    int friendNo;
    char name[50];
};

int main(){
    struct friends arrFriends[10];
    printf("Enter Details of Student:-\n");
    for(int i=0; i<=5; i++){
        printf("\tEnter name of friend:- ");
        fflush(stdin);
        gets(arrFriends[i].name);
        printf("\tEnter friend rank:- ");
        fflush(stdin);
        scanf("%d", &arrFriends[i].friendNo);
    }

    printf("\nEntered Details:-\n");
    for(int i=0; i<=5; i++)
        printf("\tRank :- %d\tName :- %s\n", arrFriends[i].friendNo, arrFriends[i].name);

    return 0;
}
