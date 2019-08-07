//~ -->insertion sort
//~ k=3
//~ 6 4 8 3 5 9
	//~ 3 4 6 8

#include<stdio.h>
void getvalues(int size,int is[]){
	FILE *fv=fopen("input.txt","r");
	int i;
	for(i=0;i<size;i++){
		fscanf(fv,"%d",&is[i]);
	}
}
void display(int size,int is[]){
	for(int i=0;i<size;i++){
		printf("%d ",is[i]);
	}
}
//8 5 2 3 7 9 1
void insertion_sort(int size,int is[]){
	int i,j,k;
	for(i=1;i<size;i++){
		k=is[i];
		for(j=i-1;j>=0&&is[j]>k;j--){
			is[j+1]=is[j];
			printf("\n");
			display(size,is);
		}
		printf("\n");
		
		is[j+1]=k;
	}
}
int main(){
	int size;
	FILE *fs=fopen("size.txt","r");
	fscanf(fs,"%d",&size);
	int is[size];
	getvalues(size,is);
	printf("Before Sorting:");
	display(size,is);
	insertion_sort(size,is);
	printf("\nAfter Sorting :");
	display(size,is);
	return 0;
}
