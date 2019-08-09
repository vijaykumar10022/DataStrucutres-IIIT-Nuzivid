#include<stdio.h>
int main(){
	int a=10;
	int *p=&a;
	printf("a-->%p\n",&a);
	printf("p-->%p\n",&p);
	printf("p--a -->%p\n",&(*p));
	scanf("%d",&(*p));
	printf("%d",a);
	return 0;
}
