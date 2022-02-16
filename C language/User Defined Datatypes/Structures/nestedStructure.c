#include<stdio.h>
#include<stdlib.h>

// Nested Structures
struct Employee{
  long int emp_id;
  char name[20];
  int salary;
};

struct Organisation {
    char organisation_name[20];
    int org_number;
    struct Employee emp[10];
};

int main(){
    struct Organisation org[2];

    printf("The size of structure organisation : %ld\n", sizeof(org));
    // Input Details
    for(int i=0; i<=1; i++){
        struct Employee worker;
        printf("\nEnter Organisation Details:- \n");
        printf("\tOrganisation Name:- ");
        fflush(stdin);
        gets(org[i].organisation_name);
        printf("\tOrganisation No.:- ");
        scanf("%d", &org[i].org_number);
        for(int j=0; j<3; j++){
            printf("\tEmployee Name:- ");
            fflush(stdin);
            gets(worker.name);
            printf("\tEmployee ID:- ");
            scanf("%ld", &worker.emp_id);
            printf("\tEmployee salary :- ");
            scanf("%d", &worker.salary);
            org[i].emp[3*i+j]= worker;
        }
    }
    // Printing the details
    printf("");
    for(int i=0; i<2; i++){
        printf("\n\t\t\t%s Employee\n", org[i].organisation_name);
        printf("\tOrganisation Number :- %d\n", org[i].org_number);
        for(int j=0; j<3; j++){
            printf("\tEmployee id :- %ld\n", org[i].emp[3*i+j].emp_id);
            printf("\tEmployee name :- %s\n", org[i].emp[3*i+j].name);
            printf("\tEmployee Salary :- %d\n", org[i].emp[3*i+j].salary);
        }
    }

    return 0;
}
