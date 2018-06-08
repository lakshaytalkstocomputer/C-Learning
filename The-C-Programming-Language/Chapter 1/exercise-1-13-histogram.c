/*

Queston : - Write a Program to print a histogram 
of the lengths of words in its input. 

Sample: 


I saw your eyes
And you made me smile
For a little while
I was falling in love

I saw your eyes
And you touched my mind
Although it took a while 
I was falling in love

I saw your eyes
And you made me cry
And for a little while
I was falling in love

I was falling in love

Falling in love
Falling in love
Falling in love
Falling in love!

 19  | 
 18  | 
 17  | 
 16  | 
 15  | 
 14  | 
 13  | 
 12  | 
 11  | 
 10  | 
  9  | 
  8  | *  
  7  | *  *  *  *  *  *  *  *  *  
  6  | *  *  
  5  | *  *  *  *  *  
  4  | *  *  *  *  *  *  *  *  *  *   *   *   *   *   *   *   *  
  3  | *  *  *  *  *  *  *  *  *  *   *   *   *   *   *   *   *  
  2  | *  *  *  *  *  *  *  *  *  *   *   *  
  1  | *  *  *  *  *  *  *  *  *  *  
     --------------------------------------------------------------------
       1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  17  18   
     <-- No of words -->
Word Count = 73



*/
#include <stdio.h>

main()
{
	int c;
	int maxWordLen = 0; /* hold value of 
	
						maximum size of the word*/
    
    int wordLen = 0;
    int wordIn = 1;
    int wordCount = 0;
    int words[20];
    int i,j,k,l;
    for(i = 0;i<20;i++ )
    {
    	words[i] = 0;
    }

	while((c = getchar()) != EOF)
	{
		
		if(c == '\n' || c == ' ')
		{
			words[wordLen] = words[wordLen] + 1;
			
			wordLen = 0;
			wordIn = 1;
		}

		else
		{
			++wordLen;
			
			if(wordIn == 1)
			{
				wordIn = 0;
				++wordCount;
			}

		}
		
	}
	
	for(l = 0;l <20; l++)
	{
		if(maxWordLen < words[l])
		{
			maxWordLen = words[l];
		}
	}
	
	printf("\n");

	for (j = 19  ;j>0 ;j--)
	{
		int len = 0;
		len = words[j];
        if(j >9 )
		{
			printf(" %d  | ",j);
		}
		else
		{
			printf("  %d  | ",j);
		}
		for (k =0;k < len;k++)
		{
			if(k >9 )
			{
				printf(" *  ");
			}
			else
			{
				printf("*  ");
			}
			
		} 
		/* printf("%d : %d \n",j,len); */
		printf("\n");
	}
    printf("     ");

    for(l = 0;l<(2 * maxWordLen); l++)
    {
     printf("--");
    }
    
    printf("\n       ");
    
    for(l = 1;l <= (maxWordLen +1); l++)
    {
     printf("%d  ",l);
    }
	
	printf(" \n     <-- No of words -->\n" );
	printf("Word Count = %d\n", wordCount);

}