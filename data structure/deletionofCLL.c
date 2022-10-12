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

void deleteatbeg(){
    temp=tail->next;

    if(temp==0){
        printf("no node there");
    }

    else if(temp->next==temp){
        tail=0;
        free(temp);
    }

    else{
        tail->next=temp->next;
        free(temp);
    }
    printf("after deleting at begging\n");
    display();
}

void deleteatend(){
    struct node*current,*previous;
    current=tail->next;

    {
        while(current->next!=tail->next){
            previous=current;
            current=current->next;
        }

        previous->next=tail->next;
        tail=previous;
        free(current);
    }
    printf("after deleting at end\n");
    display();
}


void deleteatpos(){
    struct node*current,*previous;
    int pos,i=1;
    current=tail->next;
    printf("enter position you want to delete\n");
    scanf("%d",&pos);

    if(pos<1){
        printf("invalid position\n");

    }
    else if(pos==1){
        deleteatbeg();
    }

    else{
        while(i<pos){
            previous=current;
            current=current->next;
            i++;
        }
         previous->next=current->next;
         free(current);
    }

    printf("after deletion at that position\n");
    display();
}


void main(){
    createcll();
    display();
    deleteatbeg();
    deleteatend();
    deleteatpos();
    getch();
}