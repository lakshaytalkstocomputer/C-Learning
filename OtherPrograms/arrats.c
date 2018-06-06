#include <stdio.h>

main()
{
int arr[10];

arr[0] = 10;
arr[2] = 20;
arr[10] = 1;
arr[-1] = -1;
printf("%d \n",arr[10]);
printf("%d ",arr[-1]);

printf("\n\nNew \n\n");

int arr2[5];

arr2[2] = 128;

((short *)arr2)[5] = 2;

printf("\n%d \n",arr2[2]);

}
