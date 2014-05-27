#include <stdio.h>

void print_array(int A[],int n)
{
	int i;
	printf("Array : ");
	for ( i=0; i<n; i++)
		printf("%d\t",A[i]);
	printf("\n");
}


void select_sort_nondec(int A[],int n)
{
	int i,j,minIdx,temp;
	
	for ( i=0; i<n; i++)
	{
		minIdx = i;
		for ( j=i+1; j<n; j++)
		{
			if(A[minIdx] > A[j])
				minIdx = j;
		}
		temp = A[i];
		A[i] = A[minIdx];
		A[minIdx] = temp;
	}
}

void select_sort_noninc(int A[],int n)
{
	int i,j,maxIdx,temp;
	
	for ( i=0; i<n; i++)
	{
		maxIdx = i;
		for ( j=i+1; j<n; j++)
		{
			if(A[maxIdx] < A[j])
				maxIdx = j;
		}
		temp = A[i];
		A[i] = A[maxIdx];
		A[maxIdx] = temp;
	}
}


int main()
{
	int array[] = {4,5,2,9,12,78,123,43,567,234,1,23,36,2,1345,6322,29,0,46,23};
	int n = sizeof(array)/sizeof(array[0]);

	printf("Before Sorting\n");
	print_array(array,n);	
	
	select_sort_nondec(array,n);
	
	printf("After Sorting (non-dec sort) \n");
	print_array(array,n);
	
	select_sort_noninc(array,n);
	
	printf("After Sorting (non-inc sort) \n");
	print_array(array,n);
	
	return 0;
}
