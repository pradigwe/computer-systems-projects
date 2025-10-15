#include <stdio.h>
#include <string.h>

#define MAX_CUSTOMERS 20
#define MAX_PHONE_LENGTH 16
#define MAX_NAME_LENGTH 20

struct customer
{
    char name_first[MAX_NAME_LENGTH + 1];
    char name_middle[MAX_NAME_LENGTH + 1];
    char name_last[MAX_NAME_LENGTH + 1];
    char phoneNumber[MAX_PHONE_LENGTH + 1];
    float balance;
};

void show_customer(struct customer cust)
{
    printf("\nCustomer: %s %s %s", cust.name_first, cust.name_middle, cust.name_last);
    printf("\nPhone Number: %s, Balance: $%.2f", cust.phoneNumber, cust.balance);
    printf("\n\n--------------");
}

void show_database(struct customer cust_db[], int size)
{
    printf("\nCustomer List:");
    printf("\n--------------");
    for (int i = 0; i < size; i++)
    {
        show_customer(cust_db[i]);
    }
}

int main()
{
    struct customer customers[MAX_CUSTOMERS];
    int number_customers = 0;

    char user_input;

    // customers[0] = (struct customer){"Mary", "Jane", "Allen", "1-919-123-4567", 29};
    // customers[1] = (struct customer){"Barry", "John", "Rodgers", "1-704-823-0002", 19.55};
    // show_customer(customers[0]);
    // show_customer(customers[1]);
    // show_database(customers, 2);

    for (int i = 0; i < MAX_CUSTOMERS; i++)
    {
        char first[MAX_NAME_LENGTH], middle[MAX_NAME_LENGTH], last[MAX_NAME_LENGTH], phone[MAX_PHONE_LENGTH];
        float balance;
        printf("\nPlease enter the next customer record.");
        printf("\n\t:X\tExits the program");
        printf("\n\t:S\tShows the contents of the database");

        printf("\n\nFirst Name:");
        scanf("%s", &first);

        if (strcasecmp(first, ":x") == 0)
        {
            break;
        }
        else if (strcasecmp(first, ":s") == 0)
        {
            show_database(customers, i);
            i--;
            continue;
        }

        printf("Middle Name: ");
        scanf("%s", &middle);

        printf("Last Name: ");
        scanf("%s", &last);

        printf("Phone Number:");
        scanf("%s", &phone);

        printf("Balance Due: ");
        scanf("%f", &balance);

        customers[i] = (struct customer){"", "", "", "", balance};
        strcpy(customers[i].name_first, first);
        strcpy(customers[i].name_middle, middle);
        strcpy(customers[i].name_last, last);
        strcpy(customers[i].phoneNumber, phone);
    }

    printf("\nGoodbye!");
}