// Maximum_Subarray_Sum_(Kadane's_Algorithm)


#include<stdio.h>
int main()
{
    int arr[8]={ -2, -3 ,4, -1 ,-2, 1, 5, -3 };
    int maxSum = arr[0];
    int currentSum = arr[0];
    int start = 0, end = 0, tempStart = 0;
    for(int i = 1; i < 8; i++)
    {
        if(currentSum + arr[i] < arr[i])
        {
            currentSum = arr[i];
            tempStart = i;
        }
        else
        {
            currentSum += arr[i];
        }
        if(currentSum > maxSum)
        {
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }
    }
    printf("Maximum Sum = %d\n", maxSum);
     return 0;
}
OUTPUT
Maximum Sum = 7  

