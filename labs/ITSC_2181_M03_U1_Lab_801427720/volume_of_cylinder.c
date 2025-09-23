#include <stdio.h>

int main() {
    float userRadius, userHeight, volume;
    printf("\nEnter radius: ");
    scanf("%f", &userRadius);
    printf("Enter height: ");
    scanf("%f", &userHeight);
    
    float pi= 3.14159;

    volume = pi * (userRadius * userRadius) * userHeight;

    printf("Volume: %.2f", volume);
    return 0;
}