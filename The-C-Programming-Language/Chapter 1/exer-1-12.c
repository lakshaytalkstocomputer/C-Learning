#include <stdlib.h>
#define IN 0
#define OUT 1

main()
{
    int c;
    int state;
    state = OUT;

    while((c = getchar()) != EOF)
    {
      if( c == '\n' && state == IN)
      {
        printf("\n");
        state = OUT;
      }
      else if(c != '\n' || state == OUT)
      {
      printf(c);
      if(state == OUT)
      state = IN;
      }
    }
}
