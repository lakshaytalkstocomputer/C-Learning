#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

void main()
{
    int fahr = LOWER;
    int cel =0;
    printf("Farenheit\tCelcius\n\n");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr+STEP)
    {
        cel = (5 * (fahr - 32) )/ 9;
        printf("%9d\t\t%7d\n",fahr,cel);

    }
}
