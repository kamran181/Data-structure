#include<stdio.h>
int main(){
    int a[50],size,i;
    printf("enter the size of an array");
    scanf("%d",&size);
    printf("enter the elemets of an array");
    for (i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elemets in an array are");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
}