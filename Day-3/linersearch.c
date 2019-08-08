//https://brilliant.org/wiki/sorting-algorithms/

#include<stdio.h>
int readArray(int a[]){
	for(int i=0;i<=6;i++){
		scanf("%d",&a[i]);
	}
	return 0;
}
int displayarray(int a[]){
	for(int i=0;i<=6;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
int sortarray(int a[]){
	for(int i=0;i<6;i++){// 10 2 3 11 22 10
			for(int j=0;j<6-i-1;j++){
				if(a[j]>a[j+1]){
					int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}	
			}
		}	
	return 0;
}
int main(){
	int a[6];
	readArray(a);
	displayarray(a);
	printf("\n");
	printf("After sorted array");
	sortarray(a);
	displayarray(a);
	
	
}
