#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue(int x){
    if(rear==N-1){
        printf("overflow condition");
    }

    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;

    }

    else{
        rear++;
        queue[rear]=x;
    }
  
}


void dequeue(){
    if(rear==-1&& front==-1){
        printf("underflow condition\n");
    }

    else if(front==rear){
        front=rear=-1;
    }

    else{
        front++;
    }
}


void display(){
    int i;
    if(front==-1 &&rear==-1){
        printf("queue is empty");
    }

    else{
        for(i=front;i<rear+1;i++){
            printf("%d",queue[i]);
        }
    }
}

void peek(){
    if(front==-1&&rear==-1){
        printf("queue is empty\n");
    }

    else{
        printf("%d",queue[front]);
    }
}


void main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    display();
    dequeue();
    dequeue();
    peek();
    display();
}