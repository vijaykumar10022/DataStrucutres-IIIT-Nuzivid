#include <stdio.h>
 void readarray(int array[],int n){
	printf("Enter number of elements\n");
	for (int c = 0; c < n; c++)
    scanf("%d", &array[c]);
 }
 void displayarray(int array[],int n){
	 printf("Before Soting of an array");
	for (int c = 0; c < n; c++)
    printf("%d\t", array[c]);
 }
 void bubbleSort(int array[],int n){
	 printf("After Sorting Of an Array Elements\n");
	for (int c = 0 ; c < ( n - 1 ); c++)
	{
		for (int d = 0 ; d < n - c - 1; d++)
		{
			 if (array[d] > array[d+1]) /* For decreasing order use < */
			 {
				int swap       = array[d];
				array[d]   = array[d+1];
				array[d+1] = swap;
			 }
		}
	}
 }
int main()
{
	int n;
	printf("Enter Array Size");
	scanf("%d",&n);
	int array[n];
	readarray(array,n);
	printf("array elements before sorting are:\n");
	displayarray(array,n);
	bubbleSort(array,n);
	printf("\nSorted list in ascending order:\n");
	displayarray(array,n);
  return 0;
}
