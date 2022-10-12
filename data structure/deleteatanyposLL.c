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

    struct node*nextnode;
    int pos;
    int i=1;
    temp=head;

    printf("enter the position you want to delete\n");
    scanf("%d",&pos);

    while(i<pos-1){
        temp=temp->next;
        i++;
    }

    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);

    temp=head;
    while(temp!=0){
        printf("%d",temp->data);
        temp=temp->next;
    }

  getch();  
}