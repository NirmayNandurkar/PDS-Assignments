#include <stdio.h>

void matrix_multiplication(int mat1[10][10], int rows1, int cols1, int mat2[10][10], int rows2, int cols2, int result[10][10]) {
    int i, j, k;

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void print_matrix(int mat[10][10], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[10][10], mat2[10][10], result[10][10];
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns for matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

   
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Enter element [%d][%d] of the matrix:-\n", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows and columns for matrix 2: ");
    scanf("%d %d", &rows2, &cols2);

    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) 
        {
            printf("Enter element [%d][%d] of the matrix:- \n", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible: Number of columns in matrix 1 must be equal to number of rows in matrix 2.\n");
        return 1;
    }

   
    matrix_multiplication(mat1, rows1, cols1, mat2, rows2, cols2, result);

    
    printf("Resulting matrix:\n");
    print_matrix(result, rows1, cols2);

    return 0;
}
