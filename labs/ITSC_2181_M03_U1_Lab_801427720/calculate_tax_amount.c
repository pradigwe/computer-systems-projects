#include <stdio.h>

int main() {

    // Create integer variables
    int income, dependents, credit;

    // Prompt user to enter income
    printf("\nEnter income: ");
    scanf("%d", &income);

    // sort through the income from lowest to highest bracket
    // then multiplies by their tax rate
    float tax;
    if(income < 9275){
        tax = income * 0.12;
    }
    else if(income < 37650){
        tax = income * 0.17;
    }
    else if(income < 91150){
        tax = income * 0.27;
    }
    else if(income < 190150){
        tax = income * 0.30;
    }
    else {
        tax = income * 0.35;
    }

    // Prints out tax based on income
    printf("Tax due: $%.2f\n", tax);

    // Prompts user to enter their number of dependents
    printf("Enter the number of dependents (0 for none): ");
    scanf("%d", &dependents);

    // Calculates tax credit based on number of dependents,
    // maximum number is 5
    if(dependents <= 5){
        credit = dependents * 450;
    } else {
        credit = 5 * 450;
    }

    // Prints out tax credit, and then the adjusted tax
    printf("Tax credit: $%d", credit);
    printf("\nAdjusted tax: $%.2f", tax - credit);
}