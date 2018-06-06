#include <stdio.h>

main()
{
   double d = 3.1416;
   char ch = *(char *)&d;
   printf("%c ",ch);
}
