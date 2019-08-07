//~ -->selection sort
//~ 3 4 5 7 1 9

//~ 1st
//~ 3 4 5 7 1 9
//~ 3 4 5 7 1 9
//~ 3 4 5 7 1 9
//~ 1 4 5 7 3 9

//~ 1 3 5 7 4 9
//~ 1 3 4 7 5 9
//~ 1 3 4 5 7 9
#include<stdio.h>
void getvalues(int size,int ss[]){
	FILE *fv=fopen("input.txt","r");
	for(int i=0;i<size;i++){
		fscanf(fv,"%d",&ss[i]);
	}
}
void display(int size,int ss[]){
	for(int i=0;i<size;i++){
		printf("%d ",ss[i]);
	}
}
void selction_sort(int size,int ss[]){
	int i,j;
	for(i=0;i<size;i++){
		printf("\n%d iteration:\n",i+1);
		for(j=i+1;j<size;j++){
			if(ss[i]>ss[j]){
				int temp=ss[i];
				ss[i]=ss[j];
				ss[j]=temp;
			}
			printf("\n");
			display(size,ss);
		}
		printf("\n");
	}
	printf("\n");
}
int main(){
	int size;
	FILE *fs=fopen("size.txt","r");
	fscanf(fs,"%d",&size);
	int ss[size];
	getvalues(size,ss);
	printf("Before Sorting:");
	display(size,ss);
	selction_sort(size,ss);
	printf("\nAfter Sorting:");
	display(size,ss);
	return 0;
}




