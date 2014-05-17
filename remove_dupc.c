#include <stdio.h>
#include <string.h>

void remove_dupc(char str[])
{
	int i,j,k,match;

	for( i=0; str[i]; i++)
	{
		for( j=i+1; str[j]; j++)
		{
			if( str[i] != str[j] )
				continue;
			else
			{
				match = j;
				while( str[i] == str[j+1] )
					j++;
				k = j-match+1;
				j -= k;
				k += match;
				while( str[match++] = str[k++]) ;/* moving the entries to left */
			}
		}
	}

}

void remove_dupc2(char str[])
{
	int i,j;
	for ( i=0; str[i] ; i++)
	{
		if(str[i] == -1)
			continue;

		for ( j=i+1; str[j]; j++)
		{
			if( str[i] == str[j])
				str[j] = -1;
		}
	}

	for(j=0; str[j] && (str[j] != -1) ; j++) ; /* find the first -1 entry */

	if(str[j])
		i=j;
	else
		i--; /* making sure that the next loop doesn't fall off the array indices */

	for( j=i+1; str[j]; j++)
	{
		if(str[j] == -1)
			continue;
		else
			str[i++] = str[j];
	}
	str[i]=str[j];/*null termination */ 		
}

int main()
{
	char str[100],*str2;

	printf(" This will remove the duplicate chars .. Enter a Word : ");
	scanf(" %s",str);
	str2 = strdup(str);
	remove_dupc(str);
	remove_dupc2(str2);
	printf("Given word without repeated chars (1) : %s \n",str);
	printf("Given word without repeated chars (2) : %s \n",str);
	return 0;
}
