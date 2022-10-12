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
        newnode=(struct node*) malloc(sizeof (struct node));
        printf("enter data you want to insert \n");
        scanf("%d",&newnode->data);
        newnode->next=0;

    if(head==0){
        head=temp=newnode;
    }

    else{
        temp->next=newnode;
        temp=newnode;
    }

    printf("do you want to continue0,1 \n");
    scanf("%d",&choice);

    }
    int count=0;
    int pos,i=1;
    temp=head;
    while(temp!=0){
        count++;
        temp=temp->next;
    }
    printf("enter position you want to insert");
    scanf("%d",&pos);

    if(pos>count){
        printf("invalid position");
    }
    else{
        newnode=(struct node*)  malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&newnode->data);

       temp=head;
       while(i<pos){
        temp=temp->next;
        i++;
       }

       newnode->next=temp->next;
       temp->next=newnode;
    }
    temp=head;
    while(temp!=0){
        printf("%d",temp->data);
        temp=temp->next;
    }
    getch();
}