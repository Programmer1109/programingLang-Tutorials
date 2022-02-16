#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Enumeration Types Basic-1
int main(){
    enum days_of_Week{mon, tues, wed, thurs, fri, sat, sun};
    enum days_of_Week start, end;
    start = tues;
    end = sat;
    printf("\nStart = %d\tEnd = %d", start, end);
    return 0;
}
