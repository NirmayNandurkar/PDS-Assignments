#include <stdio.h>


void transposeandprint(int mat[10][10], int rows, int cols) {
    int transpose_mat[10][10];
    int i, j;

    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            transpose_mat[i][j] = mat[j][i];
        }
    }

    printf("Transpose of the matrix:- \n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d\t", transpose_mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[10][10];
    int rows, cols, i, j;

    printf("Enter the number of rows and columns of the matrix:- \n");
    scanf("%d %d", &rows, &cols);

    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) 
        {
            printf("Enter the elements [%d][%d] of the matrix:\n", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    transposeandprint(mat, rows, cols);

    return 0;
}
