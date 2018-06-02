#include <stdio.h>

main()
{
 int c;
/*
char  c; */
 /* c= getchar(); */
while ((c = getchar()) != EOF)
    {
        putchar(c);
         c = getchar();
    }
    printf("Hello");
}
