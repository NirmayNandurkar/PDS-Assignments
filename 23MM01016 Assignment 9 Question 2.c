#include <stdio.h>


struct Student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float avgMarks;
};



void displayStudentDetails(const struct Student students[]) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < 6; ++i) {
        printf("\nDetails of student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n", students[i].address);
        printf("Age: %d\n", students[i].age);
        printf("Average Marks: %.2f\n", students[i].avgMarks);
    }
}

int main() {
    struct Student students[6];

    for (int i = 0; i < 6; ++i) {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        
        printf("Name: ");
        scanf("%s", &students[i].name);

        printf("Address: ");
        scanf("%s", &students[i].address);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Average Marks: ");
        scanf("%f", &students[i].avgMarks);
    }

   
    displayStudentDetails(students);

    return 0;
}
