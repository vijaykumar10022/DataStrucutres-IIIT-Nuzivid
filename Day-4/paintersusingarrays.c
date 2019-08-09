#include<stdio.h>
void readarray(int *p,int s){
		for(int i=0;i<s;i++){
			//printf("%d\n",p+i);
			scanf("%d",p+i);
		}
}
void fun(int *p,int s){
		for(int i=0;i<s;i++){
			printf("%d ",*p);
			p++;
		}
}
int main(){
	int a[5];
	printf("\n");
	readarray(a,5);
	fun(a,5);
	return 0;
}
