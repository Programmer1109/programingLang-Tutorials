#include<stdio.h>
#include<stdlib.c>

// Returning structure variables
struct employee{
    int empID;
    char empName[20];
    int salary;
};

struct employee maxSalary(struct employee , struct employee , struct employee );

int main(){
    struct employee worker[3];
    struct employee max;
    // Input Details
    printf("Enter Employee Details:-\n");
    for(int i=0; i<=2; i++){
        printf("\tName of Employee:- ");
        fflush(stdin);
        gets(worker[i].empName);
        printf("\tEmployee ID:- ");
        scanf("%d", &worker[i].empID);
        printf("\tEmployee Salary:- $");
        scanf("%d", &worker[i].salary);
    }
    // Output Maximum Salary
    max = maxSalary(worker[0], worker[1], worker[2]);
    printf("\n\nMaximum Salary = %s($%d)", max.empName, max.salary);
    return 0;
}

struct employee maxSalary(struct employee emp1, struct employee emp2, struct employee emp3){
    return (emp1.salary>emp2.salary ? (emp1.salary>emp3.salary ? emp1:emp3):(emp2.salary>emp3.salary ? emp2:emp3));
}
