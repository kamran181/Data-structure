#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
};

void main(){
	
	struct node*head,*temp,*newnode;
	int choice=1;
    head=0;
	
	while(choice){
	
	newnode=(struct node*) malloc(sizeof (struct node));
	printf("enter data you want to insert\n");
	scanf("%d",&newnode->data);
    newnode->next=0;

     if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
	
	printf("do uou want to continue(0,1)");
	scanf("%d",&choice);
	
	}
	newnode=(struct node*) malloc(sizeof(struct node));
    printf("enter data you want to insert at end\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=head;
    while(temp->next!=0){
        temp=temp->next;
               
    }
    temp->next=newnode;
    
	temp=head;
	while(temp!=0){
		
		printf("%d\n",temp->data);
		temp=temp->next;
	}

   
	
	getch();
}