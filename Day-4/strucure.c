#include<stdio.h>
struct student{
		int roll;
		char name[10];
}data;
int main(){
	//~ struct student data;
	printf("Enter Roll Number:");
	scanf("%d",&data.roll);
	printf("Enter Name :");
	scanf("%s",data.name);
	printf("Roll number = %d\n",data.roll);
	printf("Name =%s\n",data.name);
	
	return 0;
}
