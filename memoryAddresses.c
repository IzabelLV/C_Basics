#include <stdio.h>


int main()
{
    int digit = 15;
    double anotherDigit = 3.5;
    char letter = 'A';

    printf("%d\n", digit);
    printf("Memory adress of digit: %p\n", &digit);

    char *pLetterAddress = &letter;

    printf("Pointer letter address memory address: %p\n", &pLetterAddress);
    printf("Ponter letter character: %s\n", *&*&pLetterAddress);
    printf("Ponter letter character deference: %c\n", *pLetterAddress);

    return 0;
}