//~ //10 20
//~ before swapping 10 20
//~ after swapping 20 10
//~ input:10 20
//~ output:20 10
#include<stdio.h>
void swaping(int v1,int v2){//10 20
	printf("Before swapping a=%d and b=%d",v1,v2);
	//~ int temp;
	//~ temp=v1;//temp=10
	//~ v1=v2;//v1=20
	//~ v2=temp;//v2=10
	v1=v1+v2;//v1=30
	v2=v1-v2;//v2=10
	v1=v1-v2;//v1=20
	printf("\nAfter swapping a=%d and b=%d",v1,v2);
}
int main(){
	int a=10,b=20;
	swaping(a,b);
	return 0;
}
