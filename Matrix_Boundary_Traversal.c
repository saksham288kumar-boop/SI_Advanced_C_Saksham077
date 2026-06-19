// Matrix_Boundary_Traversal
#include <stdio.h>
int main() 
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);  
    int arr[rows][cols];
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int j = 0; j < cols; j++) 
    {
        printf("%d ", arr[0][j]);
    }
    for (int i = 1; i < rows; i++) 
    {
        printf("%d ", arr[i][cols-1]);
    }
    if (rows > 1) {
        for (int j = cols-2; j >= 0; j--) 
        {
            printf("%d ", arr[rows-1][j]);
        }
    }
    if (cols > 1) 
    {
        for (int i = rows-2; i > 0; i--) 
        {
            printf("%d ", arr[i][0]);
        }
    }
    return 0;
}
OUTPUT
1 2 3 6 9 8 7 4 
