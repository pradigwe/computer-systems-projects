#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// 0 = false, 1=true
int isArraySorted = 0;

// Finds the minimum value in the array
float findMin(float arr[], int size)
{
    int min = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[min] > arr[i])
        {
            min = i;
        }
    }
    return arr[min];
}

// Finds the maximum value in the array
float findMax(float arr[], int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[max] < arr[i])
        {
            max = i;
        }
    }
    return arr[max];
}

// Calculates the average of the array
float calculateAverage(float arr[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

// Finds the index of the first occurence of a given number in the array
int findIndexOf(float arr[], int size, float num)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}

// Counts how many times a given number appears in the array
int countOccurences(float arr[], int size, float num)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    return count;
}

// Prints the first 100 elements of the array
void printFirst100(float arr[])
{
    for (int i = 0; i < 100; i++)
    {
        printf("%f ", arr[i]);
    }
}

// Sorts array in ascending order
void sortArray(float arr[], int size)
{
    float temp = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((int)(arr[i] * 10.0) > (int)(arr[j] * 10.0))
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    isArraySorted = 1;
}

// Calculates the median of the array
float calculateMedian(float arr[], int size)
{
    if (isArraySorted == 0)
    {
        sortArray(arr, size);
    }
    if (size % 2 == 1)
    {
        return arr[size / 2];
    }
    else
    {
        return (arr[(size / 2) + 1] + arr[(size / 2) - 1]) / 2;
    }
}

// Finds the value that appears most frequently in the array
float calculateMode(float arr[], int size)
{
    int maxCountIndex = 0;
    int maxCount = countOccurences(arr, size, arr[maxCountIndex]);

    for (int i = 1; i < size; i++)
    {
        int currentCount = countOccurences(arr, size, arr[i]);

        if (currentCount > maxCount)
        {
            maxCountIndex = i;
            maxCount = currentCount;
        }
    }
    return arr[maxCountIndex];
}

// Finds the difference betweene the maximum and minimum values in the array
float calculateRange(float arr[], int size)
{
    return findMax(arr, size) - findMin(arr, size);
}

// Calculates the variance of the array
float calculateVariance(float arr[], int size, float mean)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        float valueMinusMean = arr[i] - mean;
        sum += valueMinusMean * valueMinusMean;
    }
    return sum / size;
}

// Calculates the standard deviation of the array, using the variance
float calculateStandardDeviation(float arr[], int size, float mean)
{
    return sqrt(calculateVariance(arr, size, mean));
}

int main()
{
    // Creating default array;
    float array[1000];
    int size = 1000;

    // Initialize the array with random values between 0 and 100
    srand((unsigned int)time(NULL));
    for (int i = 0; i < size; i++)
    {
        array[i] = ((float)rand() / (float)(RAND_MAX)) * 100.0; // Random float values from 0 to 100
    }

    int userCommand = 0;
    while (userCommand != 13)
    {
        printf("\n\nWelcome to the Data Explorer: Building Essential Data Analysis Tools in C!\n");
        printf("Please choose an option by entering the corresponding number:\n");

        // Commands
        printf("1: Find the minimum value\n");
        printf("2: Find the maximum value\n");
        printf("3: Calculate the average\n");
        printf("4: Find the index of a given number\n");
        printf("5: Count occurrences of a given number\n");
        printf("6: Print the first 100 elements\n");
        printf("7: Calculate the median\n");
        printf("8: Calculate the mode\n");
        printf("9: Calculate the range\n");
        printf("10: Calculate the standard deviation\n");
        printf("11: Calculate the variance\n");
        printf("12: Sort the array\n");
        printf("13: Exit\n");

        printf("Enter your command: ");
        scanf("%d", &userCommand);

        // sorting through option that user chooses
        if (userCommand == 1)
        {
            printf("\nThe minimum value is: %g", findMin(array, size));
        }
        else if (userCommand == 2)
        {
            printf("\nThe maximum value is: %g", findMax(array, size));
        }
        else if (userCommand == 3)
        {
            printf("\nThe average value is: %g", calculateAverage(array, size));
        }
        else if (userCommand == 4)
        {
            float findNumber;
            printf("Enter the number to find: ");
            scanf("%f", &findNumber);

            int numIndex = findIndexOf(array, size, findNumber);
            if (numIndex == -1)
            {
                printf("\nThe number %g is not found in the array.", findNumber);
            }
            else
            {
                printf("\nThe number %g is found in the array at index %d", findNumber, numIndex);
            }
        }
        else if (userCommand == 5)
        {
            float findNumber;
            printf("\nEnter the number to find: ");
            scanf("%f", &findNumber);

            int numCount = countOccurences(array, size, findNumber);
            printf("\nThe number %g occurs %d times in the array.", findNumber, numCount);
        }
        else if (userCommand == 6)
        {
            printf("\nFirst 100 elements of the array:\n");
            printFirst100(array);
        }
        else if (userCommand == 7)
        {
            printf("\nThe median is: %f\n", calculateMedian(array, size));
        }
        else if (userCommand == 8)
        {
            printf("\nThe mode is: %f\n", calculateMode(array, size));
        }
        else if (userCommand == 9)
        {
            printf("\nThe range is: %f", calculateRange(array, size));
        }
        else if (userCommand == 10)
        {
            printf("\nThe standard deviation is: %f", calculateStandardDeviation(array, size, calculateAverage(array, size)));
        }
        else if (userCommand == 11)
        {
            printf("\nThe variance is: %f", calculateVariance(array, size, calculateAverage(array, size)));
        }
        else if (userCommand == 12)
        {
            printf("\nArray has been sorted!");
            sortArray(array, 1000);
        }
    }
    // Exits loop when user enters 13, then prints goodbye message
    printf("\nGoodbye!");
    return 0;
}
