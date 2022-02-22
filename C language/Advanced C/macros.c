#include<stdio.h>
#include<stdlib.c>

// Macros in C Language
    // Object like Macro
#define Date 31
    // Chain like Macro
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138
    // Function like Macro
#define AREA(l, b) (l*b)
    // Multi Line Macro
#define Elements 15, \
            23, \
            37

int main(){
    int length=8, breadth=16, area;
    int arr[] = {Elements};
    printf("Lockdown will be extended upto %d-MAY-2020\n", Date);
    printf("Geeks for Geeks have %dK followers on Instagram\n", INSTAGRAM);
    area = AREA(length, breadth);
    printf("Area = %d\n", area);
    for(int i=0; i<3; i++)
        printf("Element[%d] = %d\t", i, arr[i]);
    return 0;
}
