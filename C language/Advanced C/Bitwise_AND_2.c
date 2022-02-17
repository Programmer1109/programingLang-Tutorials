#include<stdio.h>
#include<stdlib.h>

// Bitwise AND example-2
int main(){
    int mask = 10;
    int number;
    printf("Enter a number :- ");
    scanf("%d", &number);
    if((number & mask) == mask)
        printf("Bits 1 and 3 are set.");
    else
        printf("Bits 1 and 3 are not set.");
    return 0;
}
