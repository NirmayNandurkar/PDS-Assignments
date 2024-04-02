#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#define MAX_RECORDS 100


struct Student {
    char name[100];
    int rollNumber;
    float percentage;
};


struct Student studentDB[MAX_RECORDS];
int numRecords = 0;


void insert();
void sortName();
char* findOne(const char *prefix);
void specs(int *count, float *highest, float *lowest, float *mean, float *stdDev);
void delete();

int main() {
    int choice;
    do {
        printf("\n1. Insert a record\n");
        printf("2. Sort records by name\n");
        printf("3. Find a record by name prefix\n");
        printf("4. Show statistics\n");
        printf("5. Delete a record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                sortName();
                printf("Records sorted by name.\n");
                break;
            case 3: {
                char prefix[100];
                printf("Enter the name prefix: ");
                scanf("%s", prefix);
                char *foundName = findOne(prefix);
                if (foundName != NULL) {
                    printf("Name found: %s\n", foundName);
                } else {
                    printf("No name found.\n");
                }
                break;
            }
            case 4: {
                int count;
                float highest, lowest, mean, stdDev;
                specs(&count, &highest, &lowest, &mean, &stdDev);
                printf("Number of records: %d\n", count);
                printf("Highest percentage: %.2f\n", highest);
                printf("Lowest percentage: %.2f\n", lowest);
                printf("Mean percentage: %.2f\n", mean);
                printf("Standard deviation: %.2f\n", stdDev);
                break;
            }
            case 5:
                delete();
                break;
            case 6:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}


void insert() {
    if (numRecords >= MAX_RECORDS) {
        printf("Database is full. Cannot insert more records.\n");
        return;
    }

    printf("Enter name: ");
    scanf("%s", studentDB[numRecords].name);

    printf("Enter roll number: ");
    scanf("%d", &studentDB[numRecords].rollNumber);

    printf("Enter percentage: ");
    scanf("%f", &studentDB[numRecords].percentage);

    numRecords++;
}


void sortName() {
    for (int i = 0; i < numRecords - 1; i++) {
        for (int j = 0; j < numRecords - i - 1; j++) {
            if (strcmp(studentDB[j].name, studentDB[j + 1].name) > 0) {
                struct Student temp = studentDB[j];
                studentDB[j] = studentDB[j + 1];
                studentDB[j + 1] = temp;
            }
        }
    }
}

char* findOne(const char *prefix) {
    for (int i = 0; i < numRecords; i++) {
        if (strncmp(studentDB[i].name, prefix, strlen(prefix)) == 0) {
            return studentDB[i].name;
        }
    }
    return NULL;
}

void specs(int *count, float *highest, float *lowest, float *mean, float *stdDev) {
    if (numRecords == 0) {
        *count = *highest = *lowest = *mean = *stdDev = 0;
        return;
    }

    *count = numRecords;
    *highest = *lowest = studentDB[0].percentage;
    float sum = studentDB[0].percentage;

    for (int i = 1; i < numRecords; i++) {
        if (studentDB[i].percentage > *highest) {
            *highest = studentDB[i].percentage;
        }
        if (studentDB[i].percentage < *lowest) {
            *lowest = studentDB[i].percentage;
        }
        sum += studentDB[i].percentage;
    }

    *mean = sum / numRecords;

    float sumSquares = pow(studentDB[0].percentage - *mean, 2);
    for (int i = 1; i < numRecords; i++) {
        sumSquares += pow(studentDB[i].percentage - *mean, 2);
    }
    *stdDev = sqrt(sumSquares / numRecords);
}


void delete() {
    int rollNumber;
    printf("Enter the roll number to delete: ");
    scanf("%d", &rollNumber);

    int pos = -1;
    for (int i = 0; i < numRecords; i++) {
        if (studentDB[i].rollNumber == rollNumber) {
            pos = i;
            break;
        }
    }

    if (pos != -1) {
        for (int i = pos; i < numRecords - 1; i++) {
            studentDB[i] = studentDB[i + 1];
        }
        numRecords--;
        printf("Record with roll number %d deleted successfully.\n", rollNumber);
    } else {
        printf("Record with roll number %d not found.\n", rollNumber);
    }
}
