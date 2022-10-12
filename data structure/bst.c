#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*left;
    struct node*right;
};

struct node*newnode,*root=0,*trav;

void create(){
    int n,i;
    printf("enter no of node\n");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        newnode=(struct node*) malloc (sizeof(struct node));
        
    }
}
