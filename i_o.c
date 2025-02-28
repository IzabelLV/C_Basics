#include <stdio.h>
#include <string.h>

void inputOutput()
{
    // %d outputs only INT types.
    // %f outputs only FLOAT types.
    // %lf outputs only DOUBLE types.

    printf("This is a simple output.\n");

    char name[10];
    printf("Enter your name: \n");
    //scanf("%s",name);
    fgets(name, 10, stdin); // standart input and acts as getline, gets a full line of input.

    if (strlen(name) > 9) // 9 because of the \0
    {
        printf("This name is too long!\n");
    }
    else
    {
        printf("Hello, %s.\n", name); // Will add every other text after %s on a new line if fgets() is used.
    }

    return 0;
}