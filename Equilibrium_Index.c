// Equilibrium_Index
#include <stdio.h>
int main() 
{
    int arr[5]={1 ,3 ,5 ,2 ,2 };
    int totalSum = 0;
    for (int i = 0; i < 5; i++) {
        totalSum += arr[i];   
    }
    int leftSum = 0;
    int found = 0;  
    for (int i = 0; i < 5; i++) {
        totalSum -= arr[i];     

        if (leftSum == totalSum) {
            printf("Index Number = %d\n", i); 
            found = 1;
        }
        leftSum += arr[i];      
    }
    if (found!=1) 
    {
        printf("No equilibrium index found\n");
    }
    return 0;
}
OUTPUT
Index Number = 2
