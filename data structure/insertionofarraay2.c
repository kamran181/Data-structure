#include<stdio.h>
int main(){
    int a[50],size,num,pos,i;
    printf("enter the size of an array");
    scanf("%d",&size);
    if(size>50){
    printf("invalid size");}
    else{
        printf("enter the elements of an array");
        for(i=0;i<size;i++){
            scanf("%d",&a[i]);
        }
        printf("enter the number and position you want to insert");
        scanf("%d %d", &num ,&pos);
         

        a[size]=a[pos-1];
        a[pos-1]=num;
        size++;

        printf("elements after insertion are");
        for(i=0;i<size;i++){
            printf("%d",a[i]);
        }
    
    

    }

}