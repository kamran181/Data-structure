#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node*tail,*temp,*newnode;

void createcll(){
    tail=0;
    int choice=1;

    while(choice){
        newnode=(struct node*) malloc(sizeof(struct node));
        printf("enter data\n");
        scanf("%d",&newnode->data);
        newnode->next=0;

        if(tail==0){
            tail=newnode;
            tail->next=newnode;
        }

        else{
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }

        printf("do you want to continue(0,1)\n");
        scanf("%d",&choice);
    }
}


void display() {
    temp=tail->next;

    while(temp->next!=tail->next){
        printf("%d",temp->data);
        temp=temp->next;
    }

    printf("%d\n",temp->data);
                

}   


void main(){
    createcll();
    display();
    getch();
}
