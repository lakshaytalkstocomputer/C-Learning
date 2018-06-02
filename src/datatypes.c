#include <stdio.h>

void main()
{
/*int i =2;
//short s = i;
//printf("%d %d",s,i);
*/
/*

// this code show -0.000000
*/
int i = 6442450944;

float f = *(float*)&i;
printf("%f \n",f);

/*
short s = *(short*) &f;
printf("%d ",s);
/* float f = 7.0; */







/*

printf("The sizes are : \n");
printf("%d \n",sizeof(short));
printf("%d \n",sizeof(int));
printf("\n\n");
printf("int to short conversion : \n");
int i = 134217727;
short s = i;
printf("%d \n",s);

printf("\n\n");
printf("short to int conversion : \n");
short j = -2;
int k = j;
printf("%d \n",k);

printf("\n\n");
printf("int to short conversion : \n");
int l = 32768;
short m = l;
printf("%d \n",m);

*/

}
