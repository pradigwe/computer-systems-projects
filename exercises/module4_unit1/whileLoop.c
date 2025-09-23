#include <stdio.h>

int main() {
    int sum =0;
    int userAnswer =0;
    while(userAnswer != -1){
        printf("\nCurrent Sum: %d\n", sum);
        printf("Please enter the next number (-1 to exit program): ");
        scanf("%d", &userAnswer);
        sum += userAnswer;
    }
    printf("\nDone!");
}