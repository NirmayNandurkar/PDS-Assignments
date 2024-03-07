#include <stdio.h>

#define MAX_CITIES 5
#define DAYS_IN_WEEK 7

void calculateCityAverages(int temperatures[MAX_CITIES][DAYS_IN_WEEK], float averages[MAX_CITIES]) {
    for (int i = 0; i < MAX_CITIES; i++) {
        float sum = 0;

        for (int j = 0; j < DAYS_IN_WEEK; j++) {
            sum += temperatures[i][j];
        }

        averages[i] = sum / DAYS_IN_WEEK;
    }
}

int main() {
    int temperatures[MAX_CITIES][DAYS_IN_WEEK];
    float cityAverages[MAX_CITIES];

    printf("Enter temperature for each city for a week:\n");

    for (int i = 0; i < MAX_CITIES; i++) {
        printf("City %d:\n", i + 1);

        for (int j = 0; j < DAYS_IN_WEEK; j++) {
            printf("  Day %d: ", j + 1);
            scanf("%d", &temperatures[i][j]);
        }
    }

    calculateCityAverages(temperatures, cityAverages);

    printf("\nCity-wise Average Temperatures:\n");

    for (int i = 0; i < MAX_CITIES; i++) {
        printf("City %d: %.2f\n", i + 1, cityAverages[i]);
    }

    return 0;
}
