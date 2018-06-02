#include <stdio.h>

void main()
{
int count = 0;
int c = 0;

while( (c= getchar()) != EOF)
{
if( c == ' ' && count >= 0)
{
if(count == 0)
{
putchar(c);
++count;
}
++count;

}
else
{
 count = 0;
 putchar(c);
}
}

}
