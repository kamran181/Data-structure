#include<stdio.h>
int main(){
    int a[50],size,pos,num,i;
    printf("enter the size of an array");
    scanf("%d",&size);
    printf("enter the elements of an array");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    if(size>50){
        printf("invalid size");
    
    }
    else{
   
    printf("enter the data you want to insert");
    scanf("%d",&num);
    printf("enter the position where you want to insert");
    scanf("%d",&pos);

    for(i=size-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
     
     printf("elements of an array after insertion are" );
     for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }

    }




}