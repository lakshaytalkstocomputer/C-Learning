#include <stdio.h>

main()
{
 long count;

 count = 0;
 int c;
 while((c = getchar()) != EOF)
 {
  ++count;
 printf(" Counter = %ld\n",count);
 }

}
