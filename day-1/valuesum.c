//~ -->8 3 5 1 6 9 11 17
//~ -->3,5,11,17

//~ -->size 5
//~ -->array allocation -->20 bytes
//~ -->read values
//~ -->prime
#include<stdio.h>
//funtion declaration
//funtion defination

void getvalues(int size,int array[])
{
	FILE *FD=fopen("input.txt","r");
	fscanf(FD,"%d",&size);
	for(int i=0;i<size;i++)
	{
		fscanf(FD,"%d",&array[i]);
	}
	fclose(FD);
}
int i_sum(int v){
	int s=0;
	while(v!=0){
		s=s+v%10;
		v=v/10;
	}
	printf("%d\t",s);
	return s;
}
int valuesum(int s,int a[]){
	int sum=0;
	for(int i=0;i<s;i++){
		sum=sum+i_sum(a[i]);
	}
	return sum;
} 
int main(){
	int size;//4 bytes
				//~ 1 byte = 8 bits
				//~ 4 bytes = 32 bits
	FILE *FD=fopen("input.txt","r");
	fscanf(FD,"%d",&size);
	int array[size];//a[8] 
	getvalues(size,array);//funtion calling
	printf("\nSum=%d",valuesum(size,array));
	fclose(FD);
	return 1999;
}
