#include <stdio.h>
void swap(int *ap, int* bp)
{
	int temp = *ap;
	*ap = *bp;
	*bp = temp;
}
main()
{
 int a = 5;
 int b = 10;

 printf(" Before Swap : \n");
 printf("a = %d \n",a);
 printf("b = %d \n",b);

 swap(&a , &b);
 
 printf(" After Swap : \n");
 printf("a = %d \n",a);
 printf("b = %d \n",b);

}