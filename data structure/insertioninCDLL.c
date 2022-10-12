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

void insertatbeg(){
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("enter data you want to insert at begining\n");
    scanf("%d",&newnode->data);

    if(head==0){
        head=tail=newnode;
        head->next=head;
        head->prev=tail;
    }

    else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        newnode->prev=tail;
        tail->next=newnode;
    }

    printf("after inserting element at the begining we have\n");
    display();
}

void inseratend(){

    newnode=(struct node*) malloc(sizeof(struct node));
    printf("enter data you want to insert at end\n");
    scanf("%d",&newnode->data);

    if(head==0){
        head=tail=newnode;
        head->next=head;
        head->prev=tail;
    }

    else{
        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;
        newnode->next=head;
        head->prev=newnode;
    }

    printf("after inserting element at the end\n");
    display();

}

void insertatpos(){
    temp=head;
    int pos,i=1;
    printf("enter position you want to insert");
    scanf("%d",&pos);

    if(pos<1){
        printf("invalid position \n");
    }

    else{
        newnode=(struct node*) malloc(sizeof(struct node));
        printf("enter data you want to insert at begining\n");
        scanf("%d",&newnode->data);

        while(i<pos-1){
            temp=temp->next;
            i++;
        }

        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next->prev=newnode;
        temp->next=newnode;


    }

    printf("after inserting element at the position\n");
    display();

}


void main(){
    create();
    display();
    insertatbeg();
    inseratend();
    insertatpos();
    getch();
}