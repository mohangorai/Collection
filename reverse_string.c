#include <stdio.h>

void reverse(char str[])
{

	int i,len;
	char c;

	for(len=0; str[len]; len++) /*do nothing in the loop */ ;

	for(i=0; i<len/2; i++)
	{
		c = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = c;
	}
}

int main()
{
	char str[200];

	printf("Enter a word to be reversed : ");
	scanf("%s",str);
	printf("Entered Word :: %s \n", str);
	reverse(str);
	printf("Reversed  Word :: %s \n", str);
	return 0;
}
