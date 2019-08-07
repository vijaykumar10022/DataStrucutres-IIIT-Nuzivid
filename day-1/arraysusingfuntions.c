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
	for(int i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
}
void is_prime(int v )
{
	int dc=0;
	for(int i=1;i<=v;i++)
	{
		if(v%i==0)
		{
			dc++;
		}
	}
	if(dc==2)
	{
		printf("%d,",v);
	}
}
void primenumbers(int s,int a[]){
	for(int i=0;i<s;i++){
		is_prime(a[i]);//for checking value is prime or not
	}
}
int main(){
	int size1,size2;//4 bytes
				//~ 1 byte = 8 bits
				//~ 4 bytes = 32 bits
				
	printf("Enter Your Size:");
	scanf("%d",&size1);//8
	int array[size1];//a[8] 
	getvalues(size1,array);//funtion calling
	primenumbers(size1,array);//prime numbers 
	printf("\nEnter Your Size:");
	scanf("%d",&size2);//8
	int array2[size2];//a[8] 
	getvalues(size2,array2);//funtion calling
	primenumbers(size2,array2);//prime numbers 
	return 1999;
}
