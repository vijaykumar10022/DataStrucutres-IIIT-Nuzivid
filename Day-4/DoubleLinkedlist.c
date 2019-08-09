#include<stdio.h>
#include<stdlib.h>
struct node{
		int data;
		struct node* llink;
		struct node* rlink;
};
struct node* root=NULL;
void insert(){
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter Your node data:");
	scanf("%d",&temp->data);
	printf("%d Element  inserted sucessfully..!!\n",temp->data);
	temp->llink=NULL;
	temp->rlink=NULL;
	if(root==NULL){
		root=temp;
	}
	else{
		struct node* p;
		p=root;
		while(p->rlink!=NULL){
			p=p->rlink;
		}
		p->rlink=temp;
		temp->llink=p;
	}
	
} 
void insertatmiddle(){
	
}
int  length(){
	return 0;
}
void Display(){
	struct node* p;
		p=root;
		if(p->rlink==NULL){
			printf("No elements in list..!!");
		}else{
			while(p!=NULL){
				printf("%d ",p->data);	
				p=p->rlink;			
			}
			printf("\n");
		}
	
}
void delete(){
	
}
int main(){
	while(1){
		printf("Double linked list Opearions:\n");
		printf("1.Insert\n");
		printf("2.Insert at middle\n");
		printf("3.Length\n");
		printf("4.Display\n");
		printf("5.Delete\n");
		printf("6.quit\n");
		int n;
		printf("\n\nEnter your option:");
		scanf("%d",&n);
		switch(n){
			case 1:insert();
					break;
			case 2:insertatmiddle();
					break;
			case 3:length();
					//printf("No of Elements in list is %d\n",le);
					break;
			case 4:Display();
					break;
			case 5:delete();
					break;
			case 6:exit(0);
					break;
			default:printf("Invalid choice\n");
			
		}
	}
	return 0;
}
  
