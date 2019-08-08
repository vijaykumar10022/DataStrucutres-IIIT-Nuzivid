#include<stdio.h>
int rear=-1;
int front=0;
void insert(int queue[],int size){
	if(rear==size-1){
		printf("Queue is full..!!\n");
	}
	else{
		int item;
		printf("\nEnter your item:");
		scanf("%d",&item);
		rear++;
		queue[rear]=item;
		printf("\n%d is inserted sucessfully..!!\n",item);
	}
}
void display(int queue[]){
	if(rear>-1){
		for(int i=0;i<=rear;i++){
			printf("%d ",queue[i]);
		}
		printf("\n");
	}
	else{
		printf("\nQueue is Emty...!!!\n");
	}
}
void delete(int queue[]){
	if(rear>-1){
		printf("\n%d is deleted\n",queue[front]);
		for(int i=0;i<=rear;i++){
			queue[i]=queue[i+1];
		}
		rear--;
	}
	else{
		printf("\nQueue Emty...!!\n");
	}
}
int main(){
	int size;
	printf("Enter queue size:");
	scanf("%d",&size);
	int queue[size];
	int op;
	printf("Choose your option:\n1.insert\n2.delete\n3.display\n");
	while(1){
		scanf("%d",&op);
		switch(op){
			case 1:insert(queue,size);
					break;
			case 2:delete(queue);
					break;
			case 3:display(queue);
					break;
			default :printf("Enter Valid Option");
		}
	}
	
}
