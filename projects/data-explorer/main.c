#include <stdio.h>

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
    float array[150];
    array[0] = 2.76;
    for(int i=1; i<150; i++){
        if(array[i-1] >= 100){
            array[i] = (array[i-1] * 0.1) + 3.4;
        } else {
            array[i] = array[i-1] * 1.4 + 14.01;
        }
    }

    int userCommand;
    while(userCommand != 7) {
        printf("Welcome to the Data Explorer: Building Essential Data Analysis Tools in C!\n");
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
        scanf("%d\n", &userCommand);

        // sorting through option that user chooses
        if(userCommand == 6) {
            printFirst100(array);
            printf("array printed!");
        }
    }
}
