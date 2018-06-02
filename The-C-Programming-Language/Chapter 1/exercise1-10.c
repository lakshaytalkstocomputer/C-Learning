#include <stdio.h>

void main()
{
int c;
int d;
while( (c = getchar() ) != EOF )
{
d = 0;
if(c == '\t')
{
putchar('\\');
putchar('t');
d = 1;
}
if(c == '\b')
{
putchar('\\');
putchar('b');
d =1;
}
if(c == '\\')
{
putchar('\\');
putchar('\\');
d = 1;
}
if( d == 0)
{
putchar(c);

}

}

}


