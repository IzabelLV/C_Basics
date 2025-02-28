#include <stdio.h>
#include <string.h>


int main()
{
    printf("For loop: ");
    for (int i = 0; i <= 10; ++i)
    {
        printf("%d ", i);
    }
    printf("\n");

    printf("While loop: ");
    int digit = 0;
    while (digit <= 10)
    {
        printf("%d ", digit);
        digit++; //if removed will cause infinite loop
    }

    printf("\n");
    printf("Do while loop: ");
    int digit2 = 0;
    do
    {
        printf("%d ", digit2);
        digit2++; //if removed will cause infinite loop
    } while (digit2 <= 10);
    

    return 0;
}