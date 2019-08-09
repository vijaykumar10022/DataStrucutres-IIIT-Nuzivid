#include<stdio.h>
void fun(int *p,int s){
		for(int i=0;i<s;i++){
			printf("%d ",*p);
			p++;
		}
}
int main(){
	int a[5]={100,200,300,400,500};
	fun(a,5);
	return 0;
}
