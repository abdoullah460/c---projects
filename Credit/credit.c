#include <stdio.h>

int main()
{
    /*Number: 4003600000000014*/

    long card;
    long temp;
    int digit_number = 0;

    int digit;

    int remainder;
    int sum = 0;
    int sum2 = 0;
    int sumt;

    do
    {
        printf("card : ");
        scanf("%ld", &card);
        temp = card;
    }

    while (card < 0);
    {
        while (temp > 0)
        {

            remainder = temp % 100;
            /*to get */

            digit = remainder / 10;

            temp = temp / 100;

            digit = digit * 2;
            if (digit > 9)
            {
                digit = digit / 10 + digit % 10;
            }
            sum = sum + digit;
        }

        temp = card;

        while (temp > 0)
        {

            remainder = temp % 100;

            digit = remainder % 10;

            temp = temp / 100;

            sum2 = sum2 + digit;
        }

        sumt = sum + sum2;

        temp = card;

        while (temp > 0)
        {

            temp = temp / 10;

            digit_number++;
        }

        if (sumt % 10 == 0)
        {

            int two_first_number;
            long power = 1;
            for (int i = 0; i < digit_number - 1; i++)
            {
                power = power * 10;
            }

            int first_digit = card / power;
            if (first_digit == 4 && (digit_number == 13 || digit_number == 16))
            {
                printf("VISA\n");
            }
            else
            {

                power = 1;
                for (int x = 0; x < digit_number - 4; x++)
                {
                    power = power * 10;
                }
                int four_first_number = card / power;

                if ((four_first_number >= 2221 && four_first_number <= 2720) && digit_number == 16)
                {
                    printf("MASTERCARD\n");
                }
                else
                {

                    power = 1;
                    for (int j = 0; j < digit_number - 2; j++)
                    {
                        power = power * 10;
                    }

                    two_first_number = card / power;

                    switch (two_first_number)
                    {
                        case 51:
                        case 52:
                        case 53:
                        case 54:
                        case 55:
                            if (digit_number == 16)
                            {
                                printf("MASTERCARD\n");
                            }
                            else
                            {
                                printf("INVALID\n");
                            }
                            break;
                        case 34:
                        case 37:
                            if (digit_number == 15)
                            {
                                printf("AMEX\n");
                            }
                            else
                            {
                                printf("INVALID\n");
                            }
                            break;

                        default:
                            printf("INVALID\n");
                            break;
                    }
                }
            }
        }
        else
        {
            printf("INVALID\n");
            return 0;
        }
    }

    return 0;
}
