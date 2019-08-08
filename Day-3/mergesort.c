#include<stdio.h>
void getvalues(int size,int ms[]){
	FILE *fv=fopen("input.txt","r");
	for(int i=0;i<size;i++){
		fscanf(fv,"%d",&ms[i]);
	}
}
void display(int size,int ms[]){
	for(int i=0;i<size;i++){
		printf("%d ",ms[i]);
	}
}
void merge(int ms[], int s, int m, int e) 
{ 
    int i, j, k; 
    int n1 = m - s + 1; 
    printf("\nleft(n1)=%d\n",n1);
    int n2 =  e - m; 
    printf("Right(n2)=%d\n",n2);
    printf("\n");
    /* create temp arrays */
    int L[n1], R[n2]; 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++){ 
        L[i] = ms[s + i]; 
	}
	printf("\nLeft array:");
	display(n1,L);
	printf("\n");
    for (j = 0; j < n2; j++){ 
        R[j] = ms[m + 1+ j]; 
	}
	printf("\nRight Array:");
	display(n2,R);
	printf("\n");
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = s; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 	printf("\nLeft index(i)=%d\n",i);
		printf("\nRight Index(j)=%d\n",j);
		printf("\nk position=%d\n",k);
        if (L[i] <= R[j]) 
        { 
            ms[k] = L[i]; 
            i++;
            k++;  
             
        }
        else
        { 
            ms[k] = R[j]; 
            j++; 
            k++; 
            
        } 
        
    } 
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
		printf("\nLeft out of Left index(i)=%d",i); 
		printf("\nK position=%d",k);
		ms[k] = L[i]; 
        i++; 
        k++;
        
    } 
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
		printf("\nRight out of Left index(j)=%d",j);
		printf("\nK position=%d",k);
        ms[k] = R[j]; 
        j++; 
        k++; 
        
    } 
} 
void mergeSort(int ms[], int s, int e) 
{ 
    if (s < e) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = s+(e-s)/2; 
        // Sort first and second halves 
        mergeSort(ms, s, m); 
        mergeSort(ms, m+1, e); 
        merge(ms, s, m, e); 
    } 
} 
int main(){
	int size;
	FILE *fs=fopen("size.txt","r");
	fscanf(fs,"%d",&size);
	int ms[size];
	getvalues(size,ms);
	printf("Before Sorting:");
	display(size,ms);
	mergeSort(ms,0,size-1);
	printf("\nAfter Sorting:");
	display(size,ms);
	return 0;
}
