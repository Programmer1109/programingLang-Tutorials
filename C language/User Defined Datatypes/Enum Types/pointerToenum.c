#include<stdio.h>
#include<stdlib.h>

// Pointer to Enumeration Types
enum days_of_Week{mon = 0x0A1, tues, wed, thurs, fri, sat, sun};
int main(){
    enum days_of_Week* pointer;
    enum days_of_Week start, end;
    pointer = &start;
    start = tues;
    end = sun;
    printf("\nStart = %d\tEnd = %d", *pointer, end);
    return 0;
}
