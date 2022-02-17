#include<stdio.h>
#include<stdlib.h>

// Returning Union from function
union employee{
    int empID;
    char empName[20];
    int empSalary;
};

union employee empDetails1();
union employee empDetails2();

int main(){
    union employee worker[3];
    printf("Entered Details:-");
    worker[0] = empDetails1();
    printf("\n\tUsing Method 1:- Employee ID = %d\tName = %s\tSalary = %d", worker[0].empID, worker[0].empName, (*worker).empSalary);
    worker[1] = empDetails2();
    printf("\n\tUsing Method 2:- Employee ID = %d\tName = %s\tSalary = %d", (*(worker+1)).empID, (*(worker+1)).empName, (*(worker+1)).empSalary);
    return 0;
}

union employee empDetails1(){
    union employee emp;
    printf("\nEnter Employee Details:-");
    printf("\n\tEnter Employee Name1:- ");
    fflush(stdin);
    gets(emp.empName);
    return emp;
}

union employee empDetails2(){
    union employee emp;
    printf("\nEnter Employee Details:-");
    printf("\n\tEnter Employee Salary2:- ");
    scanf("%d", &emp.empSalary);
    return emp;
}
