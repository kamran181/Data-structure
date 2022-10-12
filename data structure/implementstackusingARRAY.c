#include<stdio.h>


int stack[5];
int top=-1;

void push(){
    int x;
    printf("enter data \n");
    scanf("%d",&x);

    if(top==5-1){
        printf("overflow condition\n");
    }

    else{
        top++;
        stack[top]=x;
    }

}


void pop(){
    if(top==-1){
        printf("underflow condition\n");
    }

    else{
        top--;
    }
    
}    


void peek(){
    if(top==-1){
        printf("underflow condition\n");
    }

    else{
        printf("%d",stack[top]);
    }
}


void display(){
    int i;

    for(i=top;i>=0;i--){
        printf("%d",stack[i]);
    }
}

void main(){
    int x;
    
    do
    {
        printf("enter choice 1:push,2:pop,3:peek,4:display\n");
        scanf("%d",&x);
        switch (x){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            default:printf("invalid choice\n");
            break;
        }
      
        
    } while (x!=0);
    getch();
    

}



