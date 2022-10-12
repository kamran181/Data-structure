#include<stdio.h>
#include<stdlib.h>


struct node{
        int data;
        struct node*next;
    };


void main(){

    

    struct node*head,*temp,*newnode;
    head=0;
    int choice=1;

    while(choice){
        newnode=(struct node*) malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=0;

        if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }

        printf("do you want to continue(0,1)");
        scanf("%d",&choice);
    }

    temp=head;
    while(temp!=0){
        printf("%d \n",temp->data);
        temp=temp->next;
    }

    struct node*prevnode,*currentnode,*nextnode;
    prevnode=0;
    currentnode=nextnode=head;
    
    while(nextnode!=0){
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }

    head=prevnode;

    printf("after reversing the linked list\n");
    temp=head;
    while(temp!=0){
        printf("%d",temp->data);
        temp=temp->next;
    }
    

  getch();  
}