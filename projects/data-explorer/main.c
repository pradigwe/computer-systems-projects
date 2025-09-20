#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Finds the minimum value in the array
float findMin(float arr[], int size) {
    int min = 0;
    for(int i=0; i<size; i++){
        if(arr[min] > arr[i]){
            min = i;
        }
    }
    return arr[min];
}

// Finds the maximum value in the array
float findMax(float arr[], int size) {
    int max = 0;
    for(int i=0; i<size; i++){
        if(arr[max] < arr[i]){
            max = i;
        }
    }
    return arr[max];
}

// Calculates the average of the array
float calculateAverage(float arr[], int size){
    float sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum / size;
}

// Finds the index of the first occurence of a given number in the array
int findIndexOf(float arr[], int size, float num) {
    for(int i=0; i<size; i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}

// Counts how many times a given number appears in the array
int countOccurences(float arr[], int size, float num){
    int count = 0;
    for(int i=0; i<size; i++) {
        if(arr[i] == num) {
            count++;
        }
    }
    return count;
}

// Prints the first 100 elements of the array
void printFirst100(float arr[]){
    for(int i=0; i<100; i++){
        printf("%g ", arr[i]);
    }
}


int main() {
    // Creating default array;
    float array[1000];
    int size = 1000;

    // Initialize the array with random values between 0 and 100
    srand((unsigned int)time(NULL));
    for (int i = 0; i < size; i++) {
        array[i] = ((float)rand()/(float)(RAND_MAX)) * 100.0; // Random float values from 0 to 100
    }

    int userCommand = 0;
    while(userCommand != 7) {
        printf("\n\nWelcome to the Data Explorer: Building Essential Data Analysis Tools in C!\n");
        printf("Please choose an option by entering the corresponding number:\n");

        // Commands
        printf("1: Find the minimum value\n");
        printf("2: Find the maximum value\n");
        printf("3: Calculate the average\n");
        printf("4: Find the index of a given number\n");
        printf("5: Count occurrences of a given number\n");
        printf("6: Print the first 100 elements\n");
        printf("7: Exit\n");

        printf("Enter your command: ");
        scanf("%d", &userCommand);
        
        // sorting through option that user chooses
        if (userCommand == 1){
            printf("\nThe minimum value is: %g", findMin(array, size));
        }
        else if (userCommand == 2){
            printf("\nThe maximum value is: %g", findMax(array, size));
        }
        else if (userCommand == 3){
            printf("\nThe average value is: %g", calculateAverage(array, size));
        }
        else if (userCommand == 4){
            float findNumber;
            printf("Enter the number to find: ");
            scanf("%f", &findNumber);

            int numIndex = findIndexOf(array, size, findNumber);
            if( numIndex == -1){
                printf("\nThe number %g is not found in the array.", findNumber);
            } else {
                printf("\nThe number %g is found in the array at index %d", findNumber, numIndex);
            }
        }
        else if (userCommand == 5){
            float findNumber;
            printf("Enter the number to find: ");
            scanf("%f", &findNumber);

            int numCount = countOccurences(array, size, findNumber);
            printf("\nThe number %g occurs %d times in the array.", findNumber, numCount);
        }
        else if (userCommand == 6){
            printf("\nFirst 100 elements of the array:\n");
            printFirst100(array);
        }
    }
    // Exits loop when user enters 7, then prints goodbye message
    printf("\nGoodbye!");
    return 0;
}
