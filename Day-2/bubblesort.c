//~ 8 2 13 4 5 6-->1st iteration

//~ 2 8 13 4 5 6
//~ 2 8 13 4 5 6
//~ 2 8 4 13 5 6
//~ 2 8 4 5 13 6
//~ 2 8 4 5 6 13

//~ 2 8 4 5 6 13-->2nd iteration

//~ 2 8 4 5 6 13
//~ 2 4 8 5 6 13
//~ 2 4 5 8 6 13
//~ 2 4 5 6 8 13

//~ 2 4 5 6 8 13

//~ a[2]>a[3]
#include<stdio.h>
void getvalues(int size,int b_sort[]){
	FILE *fd=fopen("input.txt","r");
	for(int i=0;i<size;i++){
		fscanf(fd,"%d",&b_sort[i]);
	}
}
void display(int size,int b_sort[]){
	for(int i=0;i<size;i++){
		printf("%d ",b_sort[i]);
	}
}
void bubblesort(int size,int b_sort[]){
	for(int i=0;i<size;i++){
		for(int j=0;j<size-i-1;j++){
			if(b_sort[j]>b_sort[j+1]){
				int temp=b_sort[j];
				b_sort[j]=b_sort[j+1];
				b_sort[j+1]=temp;	
			}
		}
	}
}
int main(){
	int size;
	FILE *fs=fopen("size.txt","r");
	fscanf(fs,"%d",&size);
	int b_sort[size];
	getvalues(size,b_sort);
	printf("Before sorting:");
	display(size,b_sort);
	printf("\n");
	bubblesort(size,b_sort);
	printf("After sorting:");
	display(size,b_sort);
	return 0;
}
