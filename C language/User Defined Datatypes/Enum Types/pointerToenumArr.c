#include<stdio.h>
#include<stdlib.h>

// Pointer to Enumeration Array
enum days_of_Week{mon = 0x0A1, tues, wed, thurs, fri, sat, sun};
int main(){
    enum days_of_Week* pointer;
    enum days_of_Week start[3], end;
    pointer = start;
    start[0] = mon;
    start[1] = fri;
    start[2] = tues;
    end = sun;
    printf("Size of days_of_Week = %d", sizeof(end));
    printf("\nStart[0] = %d\tStart[1] = %d\tStart[2] = %d\nEnd = %d", *pointer, *(pointer+1), *(pointer+2), end);
    return 0;
}
