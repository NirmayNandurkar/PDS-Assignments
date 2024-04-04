#include <stdio.h>
#include <stdbool.h>

struct CourseRecord {
    char firstName[50];
    char lastName[50];
    int rollNumber;
    char department[50];
    char courseCode[20];
    int testMarks[3];
};

float calculateAverageTestMarks(const struct CourseRecord *record) {
    float sum = 0;
    for (int i = 0; i < 3; ++i) {
        sum += record->testMarks[i];
    }
    return sum / 3;
}


bool isPass(const struct CourseRecord *record) {
    float average = calculateAverageTestMarks(record);
    return average >= 35;
}

int main() {
    struct CourseRecord record;
  
    printf("Enter first name: ");
    scanf("%s", record.firstName);
    fflush(stdin);

    printf("Enter last name: ");
    scanf("%s", record.lastName);
    fflush(stdin);

    printf("Enter roll number: ");
    scanf("%d", &record.rollNumber);
    fflush(stdin);

    printf("Enter department: ");
    scanf("%s", record.department);\
    fflush(stdin);

    printf("Enter course code: ");
    scanf("%s", record.courseCode);
    fflush(stdin);

    printf("Enter test marks for 3 tests:\n");
    for (int i = 0; i < 3; ++i) 
    {
        printf("Enter test marks for test %d:- ", i + 1);
        scanf("%d", &record.testMarks[i]);
    }

    printf("\nStudent Name: %s %s\n", record.firstName, record.lastName);
    printf("Roll Number: %d\n", record.rollNumber);
    printf("Department: %s\n", record.department);
    printf("Course Code: %s\n", record.courseCode);
    printf("Test Marks: %d, %d, %d\n", record.testMarks[0], record.testMarks[1], record.testMarks[2]);
    
    float average = calculateAverageTestMarks(&record);
    printf("Average Test Marks: %.2f\n", average);
    
    if (isPass(&record)) {
        printf("Result: Pass\n");
    } else {
        printf("Result: Fail\n");
    }

    return 0;
}
