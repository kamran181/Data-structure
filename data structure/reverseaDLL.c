#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
    struct node*prev;
};

struct node*head,*tail,*temp,*newnode;

void create(){
    head=0;
    int choice=1;
    while(choice){
        newnode=(struct node*) malloc(sizeof(struct node));
        printf("enter data\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;

        if(head==0){
            head=tail=newnode;
        }

        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }

        printf("do you want to continue (0,1)\n");
        scanf("%d",&choice);


    }

}



void display(){
    temp=head;
    printf("the elements of dll are \n");
    while(temp!=0){
        printf("%d\n",temp->data );
        temp=temp->next;
    }
}


void reverseadll(){
    struct node*current,*nextnode;
    current=head;
    while(current!=0){
        nextnode=current->next;
        current->next=current->prev;
        current->prev=nextnode;
        current=nextnode;

    }
    current=head;
    head=tail;
    tail=current;

    printf("after reversal of dll/n");

    display();
}


void main(){
    create();
    display();
    reverseadll();
    
}