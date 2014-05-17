#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXBUF 2000

/* O(n^2) */
int unique_chars(char str[])
{
	char c;
	int i,j,len=strlen(str);

	for(i=0; i<len; i++)
	{
		c=str[i];
		for(j=i+1; j<len; j++)
		{
			if(str[j]==c)
				return 0;
		}
	}
	return 1;
}


/* O(n) */
int unique_chars2(char str[])
{
	char freq[26];
	int i,len=strlen(str);
	
	for(i=0; i<26; i++)
		freq[i]=0;

	for(i=0; i<len; i++)
		freq[tolower(str[i])-'a']++ ;

	for(i=0; i<26; i++)
		if(freq[i] > 1)
			return 0;

	return 1;
}

/* try another version with the heaps */

int main()
{

	char str[MAXBUF];
	printf("enter a word : ");
	scanf("%s",str);

	printf(" Entered Word :: %s \n",str);

	if(unique_chars(str))
		printf("Unique_chars :: The given string has all unique characters \n");
	else
		printf("Unique_chars :: The given string has duplicate characters \n");
	
	if(unique_chars2(str))
		printf("Unique_chars2 :: The given string has all unique characters \n");
	else
		printf("Unique_chars2 :: The given string has duplicate characters \n");

	return 0;
}


