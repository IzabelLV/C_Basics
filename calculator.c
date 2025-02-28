#include <stdio.h>

void welcome()
{
    printf("======= Calculator =======\n\n");
    printf("What do you want to do?\n\n");
    printf("1- Add, 2- Substract, 3- Multiply, 4- Divide\n\n");
}

double addition(double firstDigit, double secondDigit)
{
    return firstDigit + secondDigit;
}

double substraction(double firstDigit, double secondDigit)
{
    return firstDigit - secondDigit;
}

double multiplication(double firstDigit, double secondDigit)
{
    return firstDigit * secondDigit;
}

double division(double firstDigit, double secondDigit)
{
    return firstDigit / secondDigit;
}

int main()
{
    welcome();
    int choice = 0;
    scanf("%d", &choice);

    double firstDigit = 0;
    double secondDigit = 0;

    switch(choice)
    {
        case 1:
        {
        printf("Enter first digit: ");
        scanf("%lf", &firstDigit);

        printf("Enter a second digit: ");
        scanf("%lf", &secondDigit);

        printf("%lf",addition(firstDigit, secondDigit));
        break;
        }

        case 2:
        {
            printf("Enter first digit: ");
            scanf("%lf", &firstDigit);

            printf("Enter a second digit: ");
            scanf("%lf", &secondDigit);

            printf("%lf", substraction(firstDigit, secondDigit));
            break;
        }

        case 3:
        {
            printf("Enter first digit: ");
            scanf("%lf", &firstDigit);

            printf("Enter a second digit: ");
            scanf("%lf", &secondDigit);

            printf("%lf",multiplication(firstDigit, secondDigit));
            break;
        }

        case 4:
        {
            printf("Enter first digit: ");
            scanf("%lf", &firstDigit);

            printf("Enter a second digit: ");
            scanf("%lf", &secondDigit);

            printf("%lf",division(firstDigit, secondDigit));
            break;
        }

        default:
        {
           printf("Incorrect output!\n");
           break;
        }
    }

    return 0;
}
