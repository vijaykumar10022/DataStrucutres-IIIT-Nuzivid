#include<stdio.h>

int BinarySearching(int arr[], int max, int element)
{
      int low = 0, high = max - 1, middle;
      while(low <= high)
      {
            middle = (low + high) / 2;
            if(element > arr[middle])
                  low = middle + 1; 
            else if(element < arr[middle])
                  high = middle - 1; 
            else
                  return middle;
      }
      return -1;
}
 
void readarray(int arr[],int size){
	int i;
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	}
void display(int arr[],int size){
	printf("Array elements in the array\n");
	int i;
	for (i = 0; i < size; i++)
		printf("%d\t", arr[i]);
	}

int main() {
	int n,m,element;
	scanf("%d",&n);
	int arr[n];
	readarray(arr,n);
	scanf("%d",&m);
	int arr1[m];
	for(int j=0;j<m;j++)
	{
	  scanf("%d",&arr1[j]);
	  element=arr1[j];
	  int position = BinarySearching(arr, n, element);
      if(position == -1) 
      {
            printf("-1 ");
      }
      else
      {
            printf("%d ",position );
      }
	  
	}
 
  
}

