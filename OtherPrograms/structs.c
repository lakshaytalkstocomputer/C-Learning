#include <stdio.h>

struct fraction
{
int num;
int denum;

};

main()
{
struct fraction pi;
pi.num = 22;
pi.denum = 7;

printf("Address of struct \" fraction \"  is  : %p \n",(void*)&pi);
printf("Address of pi.num  is  : %p \n",(void*)&pi.num);
printf("Address of pi.denum  is  : %p \n",(void*)&pi.denum);

printf("\npi.num = %d \n", pi.num);
printf("pi.denum = %d \n", pi.denum);

((struct fraction *)&(pi.denum))->num = 12;

printf("\npi.num = %d \n", pi.num);
printf("pi.denum = %d \n", pi.denum);

printf("\n");
printf("%d",((struct fraction *)&(pi.denum))->num);

((struct fraction *)&(pi.denum))->denum = 33;
printf("\n%d",((struct fraction *)&(pi.num))->denum);

printf("\n%d",((&pi)[0].denum));

}
