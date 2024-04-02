#include <stdio.h>

struct company {
    char name[100];
    char address[100];
    char phone[10];
    int noOfEmployee;
} comp;

int main() {

    printf("Enter the name of the company:- \n");
    fgets(comp.name, sizeof(comp.name), stdin);

    printf("Enter the address of the company:- \n");
    fgets(comp.address, sizeof(comp.address), stdin);

    printf("Enter the phone number of the company:- \n");
    scanf("%s", comp.phone);

    printf("Enter the number of employees:- \n");
    scanf("%d", &comp.noOfEmployee);

    printf("\nCompany Details:\n");
    printf("Name: %s", comp.name);
    printf("Address: %s", comp.address);
    printf("Phone: %s\n", comp.phone);
    printf("Number of Employees: %d\n", comp.noOfEmployee);

    return 0;
}
