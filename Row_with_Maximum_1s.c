// Row_with_Maximum_1s
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows and columns:");
    scanf("%d %d", &rows, &cols);   
    int arr[rows][cols];
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int maxRowIndex = -1;   
    int maxOnes = -1;       
    for (int i = 0; i < rows; i++) 
    {
    int countOnes = 0;
    for (int j = 0; j < cols; j++) 
    {
        if (arr[i][j] == 1) {
            countOnes = cols - j;  
            break;                 
            }
        }
        if (countOnes > maxOnes) 
        {
            maxOnes = countOnes;
            maxRowIndex = i + 1;   
        }
    }
    if (maxRowIndex != -1)
        printf("Maximum number of 1s is in row %d \n", maxRowIndex);
    else
        printf("No 1s found\n");
    return 0;
} 
 OUTPUT

Enter number of rows and columns: 3 3
Maximum number of 1s is in row 1   
