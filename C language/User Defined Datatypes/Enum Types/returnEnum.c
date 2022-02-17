#include<stdio.h>
#include<stdlib.h>

// Returning enum from function
enum days_of_week{mon = 0x000A, tues, wed, thurs, fri, sat=0x0011, sun};
enum days_of_week dayNumber1();
enum days_of_week dayNumber2();

int main(){
    enum days_of_week temp;
    temp = dayNumber1();
    printf("Returned 1 = %d\n", temp);
    temp = dayNumber2();
    printf("Returned 2 = %d\n", temp);
    return 0;
}

enum days_of_week dayNumber1(){
    enum days_of_week day;
    day = wed;
    return day;
}

enum days_of_week dayNumber2(){
    enum days_of_week day;
    day = fri;
    return day;
}
