#include<stdio.h>
#include<stdlib.h>

struct College{
    char college_name[20];
    int ranking;
    struct Student{
        int student_id;
        char name[20];
        int roll_no;
    }student1;
};


int main(){
    struct College college1 = {"GeeksforGeeks", 7, {111, "Paul Levesque", 278}};
    printf("\nCollege name : %s\n", college1.college_name);
    printf("Ranking : %d\n", college1.ranking);
    printf("Student id : %d\n", college1.student1.student_id);
    printf("Student name : %s\n", college1.student1.name);
    printf("Roll no : %d\n",college1.student1.roll_no);
    return 0;
}
