#include<stdio.h>

void transpose(int originalMatrix[rows][cols], int transposedMatrix[cols][rows], int rows, int cols)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            transposedMatrix [j][i] = originalMatrix[i][j];
        }
    }
}

int main()
{
    int rows, cols;

    printf("Enter the number of rows and columns in the matrix:- \n");
    scanf("%d %d", &rows, &cols);

    int originalMatrix[rows][cols], transposedMatrix[cols][rows];

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("Enter [%d][%d] element of the matrix:- \n", i + 1, j + 1);
            scanf("%d", &originalMatrix[i][j]);
        }
    }

    transpose(originalMatrix, transposedMatrix, rows, cols);

    printf("Original Matrix:- \n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d\t", originalMatrix[i][j]);
        }
        printf("\n");
    }

    printf("Transposed Matrix:- \n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d\t", transposedMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;

}