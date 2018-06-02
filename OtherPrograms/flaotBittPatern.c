
#include <stdio.h>

void printFloatBits(float);

int main()
{
    float x;
    /*printf("Enter a floating- point numbers: ");
    scanf("%f",&x);*/
    /* unsigned int i = 6442450944; */
    unsigned int i = 4294967296;

    float f = *(float *)&i;
    printf("Bits of %f are:\n", f);
    printFloatBits(f);
    putchar('\n');
    return 0;
}

void printBits(unsigned int a)
{
    static int flag = 0;
    if(flag !=  32)
    {
        ++flag;
        printBits(a/2);
        printf("%d ",a%2);
        --flag;
        if(flag == 31 || flag == 23)
        {
            putchar(' ');
        }
    }

}

void printFloatBits(float x)
{
    unsigned int *iP = (unsigned int *)&x;
    printBits(*iP);
}
