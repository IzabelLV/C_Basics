#include <stdio.h>
#include <string.h>


struct PC
{
    char model[20];
    char videoCard[20];
    char motherboard[20];
    char hdd[20];
    int ramSpeed;
};


int main()
{
    int thisArr[] = {1, 2 ,3};
    int thisArr2[3] = {1, 2, 3};

    char myString[] = {'I', 'z', 'a', 'b', 'e', 'l', '\0'};

    myString[4] = 'i';
    printf("%s\n", myString);

    struct PC pc1;
    struct PC pc2;

    pc1.ramSpeed = 2000;
    ///pc1.model = "AMD"; cannot work like this
    strcpy(pc1.videoCard, "AMD");
    strcpy(pc2.videoCard, "NVIDIA");

    printf("%d\n", pc1.ramSpeed);
    printf("%s\n", pc1.videoCard);
    printf("%s\n", pc2.videoCard);

    return 0;
}