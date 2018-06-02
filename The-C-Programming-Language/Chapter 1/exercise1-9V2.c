#include <stdio.h>

void main()
{
 int c;
 int b;

 b = 0;

 while((c = getchar()) != EOF)
 {

   if( (c == ' ' && b != ' ') || ( c != ' ' ) )
   {
     putchar(c);
   }


   b= c;

 }

}
