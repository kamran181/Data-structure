#include<stdio.h>
void toh(int,char,char,char);


void main()
{
    int num;
    printf("enter the number of disks\n");
    scanf("%d",&num);
    printf("the sequence of moves involved in toh are", toh(num,'A','B','C'));
    return 0;
    getch();
}


void toh(int n,char S,char A,char D){
    if(n==1){
        printf("move 1 disk from %c %c",S,D);
        return;
    }

    toh(n-1,S,A,D);
    printf("move disk %d from %c %C",n,S,D);
    toh(n-1,A,D,S);

}

