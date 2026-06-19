// Rotate_Array_by_K_Positions

#include <stdio.h>
int main()
{
    int arr[5]={1, 2, 3, 4, 5};
    int k, i, j, last;
    printf("Enter value of K: ");
    scanf("%d", &k);
    k = k % 5;
    for(i = 0; i < k; i++)
    {
        last = arr[5 - 1];
        for(j = 5 - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
    printf("Array after rotation:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

OUTPUT
Enter value of K: 2
Array after rotation:
4 5 1 2 3
