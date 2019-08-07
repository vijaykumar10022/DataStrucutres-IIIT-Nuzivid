#include<stdio.h>
int main(){
	FILE *FD=fopen("input.txt","r");
	int size;
	fscanf(FD,"%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		fscanf(FD,"%d",&arr[i]);
	}
	int sum=0;
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
		sum=sum+arr[i];
	}
	printf("\nSum=%d",sum);
	fclose(FD);
	return 0;
}
