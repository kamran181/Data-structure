#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*left;
    struct node*right;
};

struct node*create(){
    struct node*newnode;
    int x;
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("enter data(or-1 for no node)\n");
    scanf("%d",&x);

    if(x==-1){
        return 0;
    }

    else{
        newnode->data=x;
        printf("enter the left child of %d\n",x);
        newnode->left=create();
        printf("enter the right child of %d\n",x);
        newnode->right=create();
        return newnode;
    }
}

void preorder(struct node*root){
    //root left right
    if(root==0){
        return;
    }
    else{
        printf("%d\n",root->data);
        preorder(root->left);
        preorder(root->right);

    }
}


void inorder(struct node*root){
    //left root right
    if(root==0){
        return;
    }

    else{
        inorder(root->left);
        printf("%d\n",root->data);
        inorder(root->right);
    }
}

void postorder(struct node*root){
    //left right root
    if(root==0){
        return;
    }

    else{
        postorder(root->left);
        postorder(root->right);
        printf("%d\n",root->data);
    }
}

void main(){
    struct node*root;
    root=0;
    root=create();

    printf("preorder is\n");
    preorder(root);

    printf("inorder is\n");
    inorder(root);

    printf("post order\n");
    postorder(root);

}