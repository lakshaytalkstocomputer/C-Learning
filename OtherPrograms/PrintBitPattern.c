#include <stdio.h>

void printFloatBits(float);

int main()
{
    float x;
    printf("Enter a floating- point numbers: ");
    scanf("%f",&x);
    printf("Bits of %f are:\n", x);
    printFloatBits(x);
    putchar('\n');
    /*

int i = 6442450944;

float f = *(float*)&i;
printf("%f \n",f);
*/
    return 0;
}

void printBits(unsigned int a)
{
    static int flag = 0;
    if(flag !=  32)
    {
        ++flag;
        printBits(a/32);
        printf("%d ",a%2);
        --flag;
        if(flag == 31 || flag == 23)
        {
            putchar(' ')
        }
    }

}

void printFloatBits(float x)
{
    unsigned int ip = *(unsigned int *)&x;
    printBits(*iP);
}
