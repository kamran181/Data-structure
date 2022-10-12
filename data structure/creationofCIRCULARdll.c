#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
    struct node*prev;
};

struct node*head,*tail,*newnode,*temp;

void create(){
    head=0;
    int choice=1;

    while (choice){
        newnode=(struct node*) malloc(sizeof(struct node));
        printf("enter data\n");
        scanf("%d",&newnode->data);

        if(head==0){
            head=tail=newnode;
            head->next=newnode;
            head->prev=newnode;
        }

        else{
            tail->next=newnode;
            newnode->prev=tail;
            newnode->next=head;
            head->prev=newnode;
            tail=newnode;
        }

        printf("do you want to continue (0,1)");
        scanf("%d",&choice);
    }
}


void display(){
    temp=head;
    
    printf("the elements of doubly linked list are\n");
    while(temp!=tail){
        printf("%d",temp->data);
        temp=temp->next;
    }

    printf("%d\n",temp->data);
}


void main(){
    create();
    display();
    getch();
}