#include<stdio.h>
#include<stdlib.h>

// Array of Union
union friends{
    char name[50];
    int friendNo;
};

int main(){
    union friends arrFriends[10];
    printf("Enter Details of Student:-\n");
    for(int i=0; i<=5; i++){
        printf("\tEnter friend rank:- ");
        fflush(stdin);
        scanf("%d", &arrFriends[i].friendNo);
        printf("\tEnter name of friend:- ");
        fflush(stdin);
        gets(arrFriends[i].name);
    }

    printf("\nEntered Details:-\n");
    for(int i=0; i<=5; i++)
        printf("\tEnter friend no. of student:- %d\tEnter name of friend:- %s\n", arrFriends[i].friendNo, arrFriends[i].name);

    return 0;
}
