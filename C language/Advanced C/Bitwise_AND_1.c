#include <stdio.h>
#include <stdlib.h>

// Bitwise AND example-1
int main(){
    int number;
    printf("Enter a number:- ");
    scanf("%d", &number);
    if(number<=0){
        printf("Invalid Input!!!");
        exit(0);
    }

    if(!(number & (number-1)))
        printf("\n%d is a power of 2.", number);
    else
        printf("\n%d is not a power of 2.", number);

    return 0;
}
