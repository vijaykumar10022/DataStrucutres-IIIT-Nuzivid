#include<stdio.h>
#define size 5
//~ int size=5;
int stack[size];
int top=-1;
int isfull(){
	if(top==size-1){
		return 1;
	}
	else{
		return 0;
	}
}
void push(){
	
	if(isfull()){
		printf("Stack is full...!!\n");
	}
	else
	{
		int ele;
		printf("Enter Your inserting element");
		scanf("%d",&ele);
		top++;
		stack[top]=ele;
		printf("%d is inserted %d position Sucessfully..!!\n",ele,top);
	}
}
void display(){
	if(top>-1)
	{
		for(int i=0;i<=top;i++)
		{
			printf("%d ",stack[i]);
		}
	}
}
int isemty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
void pop(){
	if(isemty()){
		printf("\nStack is Emty...!!!\n");
	}
	else{
		printf("%d is deleted\n",stack[top]);
		top--;
	
	}
}
int main(){
	
	int op;
	printf("Choose your option:\n1.PUSH\n2.POP\n3.Display\n");
	while(1){
		scanf("%d",&op);
		switch(op){
			case 1:push();
					break;
			case 2:pop();
					break;
			case 3:display();
					break;
			default:printf("Enter valid option");
		}
	}
	
	return 0;
}
