#include <stdio.h>


int main()
{
    char line[255];
    FILE * fname = fopen("myText1.txt", "r");
    //r - read file
    //w - write over
    //a - append information on file

    //fprintf(fname, "\nJenna, CEO");
    fgets(line, 255, fname);
    fgets(line, 255, fname);
    printf("%s", line);


    fclose(fname);
}