#include<stdio.h>
#include<stdlib.h>

// Array of Enumeration type
int main(){
    enum days_of_Week{mon, tues, wed, thurs, fri, sat, sun};
    enum days_of_Week start[3], end;
    start[0] = wed;
    start[1] = tues;
    start[2] = thurs;
    end = sun;
    printf("\nStart[0] = %d\tStart[2] = %d\tEnd = %d", start[0]+1, start[2]+1, end+1);
    return 0;
}
