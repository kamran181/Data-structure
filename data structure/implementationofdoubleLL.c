#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
    struct node*prev;
};
    

void main()
{
    struct node*head,*temp,*newnode;

    
    head=0;
    int choice=1;

    while(choice){
        newnode=(struct node*) malloc(sizeof(struct node));
        printf("enter data\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;

        if(head==0){
            head=temp=newnode;
        }

        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("do you want to continue 0,1");
        scanf("%d",&choice);

}



    temp=head;
    while(temp!=0){
    printf("%d",temp->data);
    temp=temp->next;
    }
}