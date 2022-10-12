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


void deleteatbeg(){

    temp=head;
    if(head==0){
        printf("invalid position\n");

    }

    

    else{
        head=head->next;
        head->prev=tail;
        tail->next=head;
        free(temp);
    }

    printf("after deleting at begining\n");
    display();
}

void deleteatend(){
    temp=tail; 
    if(head==0){
        printf("invalid position\n");

    }

    

    else{
        tail=tail->prev;
        tail->next=head;
        head->prev=tail;
        free(temp);
    }

    printf("after deleting at end\n");
    display();

}


void deleteatpos(){
    temp=head;
    int pos,i=1;
    printf("enter the position you want to delete\n");
    scanf("%d",&pos);

    if(pos<1){
        printf("invalid position\n");

    }

    else{
        while(i<pos){
            temp=temp->next;
            i++;
        }

        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);

        printf("after deleting at that position\n");
        display();

    }
}

void main(){
    create();
    display();
    deleteatbeg();
    deleteatend();
    deleteatpos();
    getch();
}