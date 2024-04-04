#include <stdio.h>
#include <string.h>


union EmpDetails {
    float hourlyWage;
    double fixedSalary;
};


struct Employee {
    int id;
    char name[50];
    union EmpDetails details;
};

int main() {
   
    struct Employee emp;

   
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee name: ");
    scanf("%s", emp.name);

    char choice;
    printf("Enter 'H' for hourly wage or 'F' for fixed salary: ");
    scanf(" %c", &choice);

    if (choice == 'H') {
        printf("Enter hourly wage: ");
        scanf("%f", &emp.details.hourlyWage);
    } else if (choice == 'F') {
        printf("Enter fixed salary: ");
        scanf("%lf", &emp.details.fixedSalary);
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    printf("\nEmployee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);

    if (choice == 'H') {
        printf("Employee Hourly Wage: $%.2f\n", emp.details.hourlyWage);
    } else if(choice == 'F'){
        printf("Employee Fixed Salary: $%.2lf\n", emp.details.fixedSalary);
    }

    return 0;
}
