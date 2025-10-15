#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    char *name;
    int age;
    int height; // in inches
    char eye_color;
};

int main()
{
    // QUESTION ONE
    float *stock_prices;
    stock_prices = (float *)calloc(500, sizeof(float));
    if (stock_prices == NULL)
    {
        printf("STOCK ERROR! \n");
        exit(1);
    }
    *stock_prices = 1.2;
    *(stock_prices + 1) = 2.3;
    *(stock_prices + 2) = 3.4;
    *(stock_prices + 3) = 4.5;
    *(stock_prices + 4) = 5.6;

    // Testing for correct placement
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\nIndex %d: %f", i, *(stock_prices + i));
    // }
    // printf("\n");

    free(stock_prices);

    // QUESTION TWO
    struct person *my_person = (struct person *)malloc(sizeof(struct person));

    my_person->name = (char *)calloc(30, sizeof(char));
    strcpy(my_person->name, "Precious Adigwe");

    my_person->age = 19;
    my_person->height = 68;
    my_person->eye_color = 'B';

    printf("Name: %s\nAge: %d\nHeight: %d\nEye Color: %c", my_person->name, my_person->age, my_person->height, my_person->eye_color);
}