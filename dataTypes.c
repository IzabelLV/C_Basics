#include <stdio.h>


void data()
{
    // This is a single comment
    /* This is a long comment */

    int a; // 4 bytes
    char b; // 1 byte
    float c; // 4 bytes
    double d; // 8 bytes
    short int e; // 2 bytes
    unsigned int f; // 4 bytes
    long int g; // 8 bytes
    long long int h; // 8 bytes
    unsigned long int i; // 4 bytes
    unsigned long long int j; // 8 bytes
    signed char k; // 1 byte
    unsigned char l; // 1 byte
    long double m; // 12 or 16 bytes

    printf("This is the size of int and it is: %d\n", sizeof(a));
    printf("This is the size of char and it is: %d\n", sizeof(b));
    printf("This is the difference between float and double, float is %d, and double is %d", sizeof(c), sizeof(d));

    return 0;
}