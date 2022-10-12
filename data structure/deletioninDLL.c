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


void deletefronbeg(){
    temp=head;
    head=temp->next;
    head->prev=0;
    free(temp);
    
    temp=head;
    printf("after deleting first node of DLL\n");
    while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

void deleteatend(){
    temp=tail;
    tail=temp->prev;
    tail->next=0;
    free(temp);

    temp=head;
    printf("after deleting last node of DLL\n");
    while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}


void deleteatanypos(){
    
    int pos,i=1;

    printf("enter position you want to delete\n");
    scanf("%d",&pos);
    
    temp=head;
    while(i<pos){
         temp=temp->next;
            i++;
        }

    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    temp->next,temp->prev=0;
    free(temp);
    

    temp=head;
    printf("after deleting at that position in DLL we have\n");
    while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }


}








void main(){
    create();
    display();
    deletefronbeg();
    deleteatend();
    deleteatanypos();
    getch();
}