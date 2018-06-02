#include <stdio.h>

/* print Fahrenheit - Celsius table
     for fahr = 0,20, .... 300 */

void main()
{
 int fahr =0;
 int cel = 0;
 int lower = 0,upper = 300 , step = 20;
 printf("Farenheit\tCelsius\n\n");
 while(fahr <= upper)
 {
    cel = 5 *(fahr-32) / 9;
    printf("%d\t\t%d\n", fahr , cel);
    fahr = fahr + step;
 }
}
