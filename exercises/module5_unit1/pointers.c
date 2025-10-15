#include <stdio.h>

int main()
{
    printf("Part One:");
    int number = 5;
    int *number_pointer = &number;

    printf("\nInteger Data: %d", number);

    *number_pointer = 100;

    printf("\nVariable set using pointer: %d", number);

    printf("\n\nPart Two:");

    float number_floating = 4.289;
    float *number_floating_pointer = &number_floating;

    printf("\nFloating Point Data: %.4f", number_floating);

    *number_floating_pointer = 3.1416;

    printf("\nVariable set using pointer: %.4f", number_floating);
}