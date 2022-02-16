#include<stdio.h>
#include<stdlib.h>

// Dynamic Memory Allocation of Enum
enum days_of_Week{mon = 0x0A1, tues, wed, thurs, fri, sat, sun=0x0AA};
int main(){
    enum days_of_Week* pointer;
    enum days_of_Week* end;
    pointer = (enum days_of_Week*) malloc(sizeof(enum days_of_Week));
    if(pointer == NULL){
        printf("Error:- Running out of memory!!!");
        exit(0);
    }
    end = (enum days_of_Week*) malloc(sizeof(enum days_of_Week));
    if(end == NULL){
        printf("Error:- Running out of memory!!!");
        exit(0);
    }

    *(pointer+0) = mon;
    *(pointer+1) = fri;
    *(pointer+2) = tues;
    *end = sun;

    printf("Size of days_of_Week = %d", sizeof(end));
    printf("\nStart[0] = %d\tStart[1] = %d\tStart[2] = %d\nEnd = %d", *(pointer), *(pointer+1), *(pointer+2), *end);

    free(pointer);
    printf("\nfreed memory!!!");
    return 0;
}
