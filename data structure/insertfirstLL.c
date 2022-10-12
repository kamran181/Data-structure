#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
};

void main(){
	
	struct node*head,*temp,*newnode;
	int choice=1;
	
	while(choice){
	
	newnode=(struct node*) malloc(sizeof (struct node));
	printf("enter data you want to insert\n");
	scanf("%d",&newnode->data);
	
	newnode->next=head;
	head=newnode;
	
	printf("do uou want to continue(0,1)");
	scanf("%d",&choice);
	
	}
	
	temp=head;
	while(temp!=0){
		
		printf("%d",temp->data);
		temp=temp->next;
	}
	
	getch();
}