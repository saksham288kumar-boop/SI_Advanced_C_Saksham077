// Matrix_Multiplication
#include <stdio.h>
int main() 
{
   int mat1[50][50], mat2[50][50], prod[50][50];
    int rows1, cols1, rows2, cols2, i, j, k;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    printf("\nEnter elements of first matrix (%dx%d):\n", rows1, cols1);
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nEnter elements of second matrix (%dx%d):\n", rows2, cols2);
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
        }
       for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            prod[i][j] = 0;
        }
    }
    for(i = 0; i < rows1; i++) 
{
        for(j = 0; j < cols2; j++) {
            for(k = 0; k < cols1; k++) {
                prod[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("\n Matrix Multiplication Result (%dx%d):\n", rows1, cols2);
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}
OUTPUT

Enter rows and columns for first matrix: 2 2
Enter rows and columns for second matrix: 2 2
Enter elements of first matrix (2x2):
1 2
3 4
Enter elements of second matrix (2x2):
5 6
7 8
Matrix Multiplication Result (2x2):
19 22 
43 50
