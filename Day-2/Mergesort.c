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
int main(){
	int size;
	FILE *fs=fopen("size.txt","r");
	fscanf(fs,"%d",&size);
	int ms[size];
	getvalues(size,ms);
	printf("Before Sorting:");
	display(size,ms);
	return 0;
}
