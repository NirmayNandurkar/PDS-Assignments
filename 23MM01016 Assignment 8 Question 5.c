#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void right_rotate_matrix(int mat[][MAX_COLS], int rows, int cols, int n) {
    int temp;
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < rows; i++) {
            // Store the last element of the row in temp
            temp = mat[i][cols - 1];
            // Shift elements of each row to the right
            for (int j = cols - 1; j > 0; j--) {
                mat[i][j] = mat[i][j - 1];
            }
            // Move the last element of the row to the beginning
            mat[i][0] = temp;
        }
    }
}

void print_matrix(int mat[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols, n;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    if (rows > MAX_ROWS || cols > MAX_COLS) {
        printf("Error: Maximum dimensions exceeded\n");
        return 1;
    }

    int mat[MAX_ROWS][MAX_COLS];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Enter the number of right rotations: ");
    scanf("%d", &n);

    printf("\nOriginal Matrix:\n");
    print_matrix(mat, rows, cols);

    right_rotate_matrix(mat, rows, cols, n);

    printf("\nMatrix after right rotation %d times:\n", n);
    print_matrix(mat, rows, cols);

    return 0;
}
