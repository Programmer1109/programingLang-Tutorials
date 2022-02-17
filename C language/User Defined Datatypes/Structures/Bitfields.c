#include<stdio.h>
#include<stdlib.h>

// Bitfields in C Programming
struct correctDate{
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 11;
};

struct incorrectDate{
    int day : 5;
    int month : 4;
    int year : 11;
};

int main(){
    while(true){
        struct correctDate date1;
        struct incorrectDate date2;
        unsigned int temp;

        printf("Size of correctDate = %d\nSize of incorrectDate = %d\n", sizeof(date1), sizeof(date2));
        printf("Enter date(MM/DD/YYYY):-");
        scanf("%u", &temp);
        date1.month = temp;
        scanf("%u", &temp);
        date1.day = temp;
        scanf("%u", &temp);
        date1.year = temp;

        date2.day = date1.day;
        date2.month = date1.month;
        date2.year = date1.year;

        printf("\nOutput:-\n");
        printf("\tCorrect Date :- %u/%u/%u\n", date1.month, date1.day, date1.year);
        printf("\tIncorrect Date:- %d/%d/%d\n", date2.month, date2.day, date2.year);
    }
    return 0;
}
