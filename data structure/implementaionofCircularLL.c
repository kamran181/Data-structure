#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node*head,*temp,*newnode;

void createcll(){
    head=0;
    int choice=1;

    while(choice){
        newnode=(struct node*) malloc(sizeof(struct node));
        printf("enter data\n");
        scanf("%d",&newnode->data);
        newnode->next=0;

        if(head==0){
            head=temp=newnode;
        }

        else{
            temp->next=newnode;
            temp=newnode;
        }
        temp->next=head;

        printf("do you want to continue (0,1)\n");
        scanf("%d",&choice);
    }
}

void display(){
    temp=head;
    while(temp->next!=head){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    
}

void main(){
    createcll();
    display();
}