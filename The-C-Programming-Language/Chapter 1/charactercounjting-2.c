#include <stdio.h>

main()
{
    long count ;
    int c;

    for(count = 0; getchar() != EOF ; ++count)
    {
     printf("Counter = %ld\n", count);
    }
}
