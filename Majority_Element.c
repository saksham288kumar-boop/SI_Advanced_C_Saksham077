// Majority_Element
#include <stdio.h>
int main() 
{
    int arr[8] = {1 ,2, 3, 1, 2, 1, 1, 3 };
    int majority = arr[0];
    int count = 1;
    for (int i = 1; i <8; i++) {
        if (arr[i] == majority)
            count++;
        else
            count--;
        if (count == 0) {
            majority = arr[i];
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < 8; i++) {
        if (arr[i] == majority)
            count++;
    }
    if (count > 8/ 2)
        printf("Majority Element = %d", majority);
    else
        printf("No Majority Element");
    return 0;
}
OUTPUT
Majority Element = 2  
