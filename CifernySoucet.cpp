#include <stdio.h>

int main()
{
    int soucet = 0;
    int cislo = 12345;
    while (cislo)
    {
        soucet += cislo % 10;
        cislo /= 10;
    }
    printf("Ciferny soucet = %d\n", soucet);
}