#include <stdio.h>

void right_rotate_matrix(int *mat, int rows, int cols, int n) {
    int temp;
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < rows; i++) {
            temp = *((mat + i * cols) + cols - 1);
            for (int j = cols - 1; j > 0; j--) {
                *((mat + i * cols) + j) = *((mat + i * cols) + j - 1);
            }
            *((mat + i * cols) + 0) = temp;
        }
    }
}

void print_matrix(int *mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", *((mat + i * cols) + j));
        }
        printf("\n");
    }
}

int main() {
    int rows, cols, n;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    if (rows > 10 || cols > 10) {
        printf("Error: Maximum dimensions exceeded\n");
        return 1;
    }

    int mat[10][10];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
        {
            printf("Enter element [%d][%d] of the matrix :- \n", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Enter the number of right rotations: ");
    scanf("%d", &n);

    printf("\nOriginal Matrix:\n");
    print_matrix(&mat[0][0], rows, cols);

    right_rotate_matrix(&mat[0][0], rows, cols, n);

    printf("\nMatrix after right rotation %d times:\n", n);
    print_matrix(&mat[0][0], rows, cols);

    return 0;
}
