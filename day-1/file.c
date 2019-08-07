#include<stdio.h>
int main(){
	FILE *fd=fopen("myfile.txt","r");
	int array[5];
	if(fd==NULL){
		printf("File is emty");
	}
	else{
		for(int i=0;i<5;i++){
			fscanf(fd,"%d",&array[i]);

		}
		for(int i=0;i<5;i++){
			printf("%d ",array[i]);
		}
	}
	fclose(fd);
	return 0;
}
