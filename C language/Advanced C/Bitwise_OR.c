#include<stdio.h>
#include<stdlib.h>

// Bitwise OR
int main(){
    int num, mask = 4;
    printf("Enter number:- ");
    scanf("%d", &num);
    num |= mask;
    printf("\nAfter ensuring bit 2 is set %d.", num);
    return 0;
}
