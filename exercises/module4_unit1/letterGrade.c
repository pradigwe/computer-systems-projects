#include <stdio.h>

int main() {
    int userAnswer;
    printf("Please enter the numeric grade: ");
    scanf("%d", &userAnswer);
    if(userAnswer >= 90){
        printf("The letter grade is a A.\n");
    }
    else if(userAnswer >= 80){
        printf("The letter grade is a B.\n");
    }
    else if(userAnswer >= 70){
        printf("The letter grade is a C.\n");
    }
    else if(userAnswer >= 60){
        printf("The letter grade is a D.\n");
    }
    else {
        printf("The letter grade is a F.\n");
    }
}