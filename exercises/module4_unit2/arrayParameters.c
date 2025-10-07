#include <stdio.h>

int main() {
    // Declare array and initialize 3 values
    int arr[12] = {[1] = 1, [3] = 3, [7] = 7};

    // Prints contents of array
    for(int i= 0; i<12; i++) {
        printf("%d ", arr[i]);
    }

    int sum = 0;
    for(int i= 0; i<12; i++) {
        sum += arr[i];
    }
    printf("\nSum: %d", sum);
    
}