#include <stdio.h>


int main()
{
    int digits[3][2] = {
                       {1, 2},
                       {3, 4},
                       {5, 6}
                       };

    printf("%d", digits[1][1]);


    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            printf("*");
        }
        printf("\n");
    }


    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("%d, ", digits[i][j]);
        }
        printf("\n");
    }

    return 0;
}