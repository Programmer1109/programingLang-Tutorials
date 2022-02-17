#include<stdio.h>
#include<stdlib.h>

// Enum with functions
enum days_of_week{mon = 0x000A, tues, wed, thurs, fri, sat=0x0011, sun};
void dayNumber(enum days_of_week []);

int main(){
    enum days_of_week days[5];
    days[0] = sun;
    days[1] = tues;
    days[2] = thurs;
    days[3] = sat;
    dayNumber(days);
    return 0;
}

void dayNumber(enum days_of_week arr[]){
    int number;
    printf("Enter a number:- ");
    scanf("%d", &number);
    if(number == 7)
        printf("\nSunday (%d)", arr[0]);
    else if(number == 6)
        printf("\nSaturday (%d)", arr[3]);
    else if(number == 4)
        printf("\nThursday (%d)", arr[2]);
    else if(number == 2)
        printf("\nTuesday (%d)", arr[1]);
    else
        printf("\nNone");
}
