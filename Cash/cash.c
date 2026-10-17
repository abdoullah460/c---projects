#include <cs50.h>
#include <stdio.h>

int main()
{
    int change;
    // change in cents
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    int penny = 1;
    int number_quarters;
    int number_dimes;
    int number_nickels;
    int number_penny;
    int remaining_cents;

    do
    {
        printf("changed owed :");
        scanf("%d", &change);
    }
    while (change < 0);

    number_quarters = change / quarters;
    remaining_cents = change % quarters;
    number_dimes = remaining_cents / dimes;
    remaining_cents = remaining_cents % dimes;
    number_nickels = remaining_cents / nickels;
    remaining_cents = remaining_cents % nickels;
    number_penny = remaining_cents / penny;

    printf("number of quarters : %d\n", number_quarters);
    printf("number of dimes : %d\n", number_dimes);
    printf("number of nickels : %d\n", number_nickels);
    printf("number of penny  : %d\n", number_penny);
    printf(" sum of coins  : %d\n", number_dimes + number_nickels + number_penny + number_quarters);

    return 0;
}

