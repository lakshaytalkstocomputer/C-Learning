#include <stdio.h>
#include <string.h>
/* void pointer can be used to point to any data type */

void swap(void * vp1, void * vp2, int size)
{
 
 /*
	void temp  = *vp1;
	*vp1 = *vp2;
	*vp2 = temp;
	
	This is wrong as:
	1. We cannot create a variable of type void.
	2. We cannot dereference void pointer, because
	   it doesnot know the size.


 */

	char buffer[size]; /* this does the function of temp */ 

	memcpy(buffer, vp1, size);
					/* this does the bit by bit copy 
					memcopy(to, from, size)
					*/

	memcpy(vp1, vp2, size);

	memcpy(vp2, buffer, size);


}

main()
{
	char a = 'a';
	char b = 'b';

    printf(" Before Swap : \n");
    printf(" a = %c \n",a);
    printf(" b = %c \n",b);

    swap(&a , &b, sizeof(a));
 
    printf("\n After Swap : \n");
    printf(" a = %c \n",a);
    printf(" b = %c \n",b);

    printf("\n");

    char* husband = strdup("Fredbbb");
    char* wife = strdup("Bulmaaa");

	printf(" Before Swap : \n");
    printf(" Husband = %s \n", husband);
    printf(" Wife = %s \n", wife);

    swap(&husband , &wife, sizeof(husband));
 
    printf("\n After Swap : \n");
    printf(" Husband = %s \n", husband);
    printf(" Wife = %s \n", wife);
  
    char* h = strdup("Fred");
    printf(" %d \n",sizeof(husband));
    printf(" %d \n",sizeof(*husband));
    printf(" %d \n",sizeof(*h));

}

