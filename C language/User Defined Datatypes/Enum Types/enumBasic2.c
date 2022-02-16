#include<stdio.h>
#include<stdlib.c>

// Enumeration Types Basic-2
int main(){
    enum days_of_Week{mon=15, tues, wed, thurs, fri=50, sat=60, sun=69};
    enum days_of_Week start, end;
    start = thurs;
    end = sun;
    printf("\nStart = %d\tEnd = %d", start, end);
    return 0;
}
