#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link; 
};
struct node* root=NULL;
int le;
void insert(){
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter Your node data:");
	scanf("%d",&temp->data);//10
	printf("Data inserted sucessf ully..!!\n");
	temp->link=NULL;               
	if(root==NULL){
		root=temp;
	}
	else{
		struct node *temp2;
		temp2=root;
		while(temp2->link!=NULL){
			temp2=temp2->link;
		}
		temp2->link=temp;
	}
}
int  length(){
	int count=0;
		struct node *temp2;
			temp2=root;
		while(temp2!=NULL){
			count++;
			temp2=temp2->link;
		}
		return count;
}
void insertatmiddle(){
	int loc;
	printf("Enter Your Location to store your data:");
	scanf("%d",&loc);
	int len=length();
	if(loc>len){
		printf("Enter Another location this location is invalid..!!\n");
	}
	else{
		struct node* p;
		p=root;
		int i=1;
		while(i<loc){
			p=p->link;
			i++;
		}
		struct node* temp;
		temp=(struct node *)malloc(sizeof(struct node));
		printf("Enter Your Data to insert your location");
		scanf("%d",&temp->data);
		temp->link=NULL;
		temp->link=p->link;
		p->link=temp;
	}
}

void Display(){
	
		struct node* p;
		p=root;
		if(p==NULL){
			printf("No elements in list..!!");
		}else{
			while(p!=NULL){
				printf("%d ",p->data);
				p=p->link;				
			}
			printf("\n");
		}
}
void delete(){
		struct node *temp3,*temp2;
		temp2=root;
		if(temp2==NULL){
			printf("No elements in list\n");
		}
		else{
			while(temp2->link!=NULL){
				temp3=temp2;
				temp2=temp2->link;
			}
			temp3->link=NULL;
			free(temp2);
		}
		printf("Data deleted Sucessfully..!!\n");
}
int main(){
	while(1){
		printf("Single linked list Opearions:\n");
		printf("1.Insert\n");
		printf("2.Length\n");
		printf("3.Display\n");
		printf("4.Delete\n");
		printf("5.quit\n");
		int n;
		printf("\n\nEnter your option:");
		scanf("%d",&n);
		switch(n){
			case 1:insert();
					break;
			case 2:le=length();
					printf("No of Elements in list is %d\n",le);
					break;
			case 3:Display();
					break;
			case 4:delete();
					break;
			case 5:exit(0);
					break;
			default:printf("Invalid choice\n");
			
		}
	}
	return 0;
}
   
