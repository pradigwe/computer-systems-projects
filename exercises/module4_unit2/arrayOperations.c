#include <stdio.h>

int main() {
    float arr[5], sum, average;

    // Prompt user to enter 5 numbers
    for(int i=0; i<5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    // Calculate sum by looping through the array
    for(int i=0; i<5; i++) {
        sum += arr[i];
    }

    // Calculate average based on sum
    average = sum / 5;

    // Print sum and average
    printf("\nSum: %.2f", sum); 
    printf("\nAverage: %.2f\n", average);
}