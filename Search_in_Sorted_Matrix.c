// Search_in_Sorted_Matrix
#include <stdio.h>
int main() {
    int rows, cols, target;
    scanf("%d %d", &rows, &cols);   
    int arr[rows][cols];
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &target);   
    int i = 0, j = cols - 1;
    int foundRow = -1, foundCol = -1;
    while (i < rows && j >= 0) 
    {
        if (arr[i][j] == target) 
        {
            foundRow = i + 1;   
            foundCol = j + 1;   
            break;
        } else if (arr[i][j] > target) 
        {
            j--;   
        } else {
            i++;   
        }
    }
    if (foundRow != -1)
        printf("Found at row %d, column %d\n", foundRow, foundCol);
    else
        printf("Not found\n");
    return 0;
}
OUTPUT
3 3 ↵
1 2 3 4 5 6 7 8 9↵
5 ↵
↵
Found at row 2, column 2
