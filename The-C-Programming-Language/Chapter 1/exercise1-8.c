#include <stdio.h>

void main()
{
    int c;
    long cBlanks, cTabs, cNLines;
    cBlanks = 0;
    cTabs = 0;
    cNLines = 0;

    while((c = getchar()) != EOF)
    {
       if(c == '\n')
        ++cNLines;
        else if(c == '\t')
        ++cTabs;
        else if(c == ' ')
        ++cBlanks;
    }
    printf("No of Blanks : %ld\nNo of Tabs :%ld\nNo of New Lines : %ld",cBlanks, cTabs, cNLines);

}
