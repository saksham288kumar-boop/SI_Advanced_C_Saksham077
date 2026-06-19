// Merge_Two_Sorted_Arrays
include <stdio.h>
int main()
{
    int a[3]= {1,3,5};
    int b[3]= {2,4,6};
    int c[6]; #
    int i, j, k;
    i = j = k = 0;
    while(i < 3 && j <3)
    {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while(i <3)
        c[k++] = a[i++];
    while(j <3)
        c[k++] = b[j++];
    printf("Merged Array: ");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);
    return 0;
}
 OUTPUT
Merged Array: 1 2 3 4 5 6
