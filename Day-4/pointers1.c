#include<stdio.h>
void add(int *p1,int *p2){
		scanf("%d",&(*p1));//50
		scanf("%d",&(*p2));//100
		printf("Addition of %d and %d is %d\n",*p1,*p2,*p1+*p2);
}
int main(){
	int a=10,b=20;
	add(&a,&b);
	printf("%d %d",a,b);//
	return 0;
}
