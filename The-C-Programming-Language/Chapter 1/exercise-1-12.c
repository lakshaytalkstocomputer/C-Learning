#include <stdio.h>
#define IN 0
#define OUT 1

main()
{
    int c;
    int state;
    state = OUT;

    while((c = getchar()) != EOF)
    {
      if( c == ' ' && state == IN)
      {
        printf("\n");
        state = OUT;
      }
      else if(c != ' ')
      {
      putchar(c);
      if(state == OUT)
        state = IN;
      }
    }
}
