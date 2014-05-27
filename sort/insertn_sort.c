#include <stdio.h>

void print_array(int A[],int n)
{
	int i;
	printf("Array : ");
	for ( i=0; i<n; i++)
		printf("%d\t",A[i]);
	printf("\n");
}


void insertn_sort_nondec(int A[],int n)
{
	int i,j,key;
	
	for ( i=1; i<n; i++)
	{
		key = A[i];
		for ( j=i-1; j>=0 && A[j] > key; j--)
			A[j+1] = A[j];
		A[j+1] = key;
	}
}

void insertn_sort_noninc(int A[],int n)
{
	int i,j,key;
	
	for ( i=1; i<n; i++)
	{
		key = A[i];
		for ( j=i-1; j>=0 && A[j] < key; j--)
			A[j+1] = A[j];
		A[j+1] = key;
	}
}

int main()
{
	int array[] = {4,5,2,9,12,78,123,43,567,234,1,23,36,2,1345,6322,29,0,46,23};
	int n = sizeof(array)/sizeof(array[0]);

	printf("Before Sorting\n");
	print_array(array,n);	
	
	insertn_sort_nondec(array,n);
	
	printf("After Sorting (non-dec sort) \n");
	print_array(array,n);
	
	insertn_sort_noninc(array,n);
	
	printf("After Sorting (non-inc sort) \n");
	print_array(array,n);
	
	return 0;
}
