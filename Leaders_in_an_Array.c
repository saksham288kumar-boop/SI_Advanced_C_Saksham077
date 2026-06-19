// Leaders_in_an_Array
#include <stdio.h>
int main() {	
    int arr[6]={16, 17, 4 , 3 , 5 , 2 };
    int maxRight = arr[6-1];   
    int leaders[6];
    int count = 0;
    leaders[count++] = maxRight;
    for (int i = 6-2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders[count++] = arr[i];
        }
    }
    for (int i = count-1; i >= 0; i--) {
        printf("\nThe leader is %d \n", leaders[i]);
    }
    return 0;
}
OUTPUT
The leader is 17 

The leader is 5 

The leader is 2
