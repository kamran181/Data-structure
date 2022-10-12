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



void insertatbeg(){
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("enter data you want to insert at bigining \n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;

    temp=head;
    temp->prev=newnode;
    newnode->next=temp;
    head=newnode;

    temp=head;
    printf("after insertion at beg \n");
    while (temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next; 
    }
    
}


void insertatend(){

    newnode=(struct node*) malloc(sizeof(struct node));
    printf("enter data you want to insert end\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;


    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;


    temp=head;
    printf("after insertion at end\n");
    while (temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next; 
    }

}
void insertatpos(){
        int count=0;
        int pos,i=1;

        temp=head;
        while(temp!=0){
            count++;
            temp=temp->next;
        }

        printf("enter position you want to insert\n");
        scanf("%d",&pos);

        if(pos<1 || pos>count){
            printf("invalid position\n");
        }

        else{
            newnode=(struct node*) malloc(sizeof(struct node));
            printf("enter data\n");
            scanf("%d",&newnode->data);
            newnode->next=0;
            newnode->prev=0;
            

            temp=head;
            while(i<pos-1){
                temp=temp->next;
                i++;

            }

            newnode->prev=temp;
            newnode->next=temp->next;
            temp->next=newnode;
            newnode->next->prev=newnode;

            temp=head;
            printf("after inserting at any position\n");
            while(temp!=0){
                printf("%d\n",temp->data);
                temp=temp->next;
            }
        }

    
}








void main(){
    create();
    display();
    insertatbeg();
    insertatend();
    insertatpos();
    getch();
}