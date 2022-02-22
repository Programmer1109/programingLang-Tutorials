#include<stdio.h>
#include<stdlib.h>

// Bitwise EXOR
int main(){
    int a, b;
    printf("Enter first number:- ");
    scanf("%d", &a);
    printf("Enter second number:- ");
    scanf("%d", &b);
    a ^= b;
    b = b^a;
    a = a^b;
    printf("First Number = %d\tSecond Number = %d", a,b);
    return 0;
}
