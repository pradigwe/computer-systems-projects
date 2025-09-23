#include <stdio.h>

int main() {
    // Prints welcome message
    printf("You will be asked to enter the daily high temperature for 10 consecutive days.\n");

    // Creates array to store temperatures, and starts max index (or temperature) at index 0
    int temps[10];
    int maxIndex = 0;

    for(int i=0; i<10; i++) {
        int temp;
        // Prompts user to enter temperature
        printf("Enter a high temperature: ");
        scanf("%d", &temp);

        // Stores temperature to temps array
        temps[i] = temp;

        // If current temperature is higher than 
        if(temps[i] >= temps[maxIndex]) {
            maxIndex = i;
        }
    }

    printf("\nThe highest recorded temperature in the 10-day period was: %d degrees", temps[maxIndex]);
    printf("\nLast recorded on: Day %d",  maxIndex + 1);
}