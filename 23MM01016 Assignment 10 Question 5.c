#include <stdio.h>
#include <string.h>

enum PayType {
    HOURLY,
    SALARY
};

union EmpDetails {
    float hourlyWage;
    double fixedSalary;
};

struct Employee {
    int id;
    char name[50];
    enum PayType payType;
    union EmpDetails details;
};

int main() {
    struct Employee emp;

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    getchar(); 

    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0'; 

    
    char payTypeInput;
    printf("Enter pay type (H for Hourly, S for Salary): ");
    scanf(" %c", &payTypeInput);
    if (payTypeInput == 'H' || payTypeInput == 'h') {
        emp.payType = HOURLY;
        printf("Enter hourly wage: ");
        scanf("%f", &emp.details.hourlyWage);
    } else if (payTypeInput == 'S' || payTypeInput == 's') {
        emp.payType = SALARY;
        printf("Enter fixed salary: ");
        scanf("%lf", &emp.details.fixedSalary);
    } else {
        printf("Invalid pay type input!\n");
        return 1; 
    }

    
    printf("\nEmployee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Pay Type: %s\n", emp.payType == HOURLY ? "Hourly" : "Salary");
    if (emp.payType == HOURLY) {
        printf("Employee Hourly Wage: $%.2f\n", emp.details.hourlyWage);
    } else {
        printf("Employee Fixed Salary: $%.2lf\n", emp.details.fixedSalary);
    }

    return 0;
}
