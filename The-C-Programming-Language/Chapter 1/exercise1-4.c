#include <stdio.h>

#define LOWER 0 /*lower limit of table */
#define UPPER 300 /*upper limit of table */
#define STEP 20 /*Step size*/

void main()
{
     printf("Celcius\t\tFarhenheit\n");
     int cel;
     for(cel = LOWER; cel <= UPPER ; cel = cel+STEP)
     {
     printf("%7d\t\t%d\n",cel,(((9*cel)/5)+32));
     }

}
