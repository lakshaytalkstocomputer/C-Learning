#include <stdio.h>

#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getLine();
void copy();


/* print longst input line; specialised version */
main()
{
	int len;
	extern int max;
	extern char longest[];

	max = 0;
	while((len = getLine()) > 0)
	{
		if(len > max)
		{
			max = len;
			copy();
		}

	}
	if (max > 0 ) /*there was a  line*/ 
	{
		printf("%s",longest );
	}
}

/* getLine: speacilised version */

int getLine()
{
	int c, i;
	extern char line[];

	for( i = 0; i < (MAXLINE -1) && (c = getchar()) != EOF && c != '\n'; ++i )
	{
		line[i] = c;
	}

	if(c == '\n')
	{
		line[i] = c;
		++i;
	}

	line[i] = '\0';
	return i;

}

/*copy : specialised version */
void copy()
{
	int i ;
	extern char line[], longest[];

	i = 0;
	while((longest[i] = line[i]) != '\0')
	{
		++i;
	}
}