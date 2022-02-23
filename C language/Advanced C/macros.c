#include<stdio.h>
#include<stdlib.c>

// Macros in C Language
    // Stringizing Operator
#define stringer(x) printf("%s\t", #x)
#define message(x, y) printf("%s -> %s", #x, #y)
    // Token Passing Operator
#define combine(x, y) x##y
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

int main() {
    int abc = 30;
    int length=8, breadth=16, area;
    int arr[] = {Elements};
    stringer(Jeg spiser ikke en pasta og drikker ool.);
    stringer(De viser oss en hund og en katt.);
    message(Min heter, Anthony);
    printf("\nResult = %d", combine(ab, c));
    printf("\nLockdown will be extended upto %d-MAY-2020\n", Date);
    printf("Geeks for Geeks have %dK followers on Instagram\n", INSTAGRAM);
    area = AREA(length, breadth);
    printf("Area = %d\n", area);
    for(int i=0; i<3; i++)
        printf("Element[%d] = %d\t", i, arr[i]);
   return 0;
}
