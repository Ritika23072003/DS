#include<stdio.h>
void TOH(int n,int source, int destination , int auxillary)
{
    if(n==1)
        printf("%c-->%c\n",source,destination);
    else{
        TOH(n-1,source,auxillary,destination);
        printf("%c-->%c\n",source,destination);
        TOH(n-1,auxillary,destination,source);
    }
}
void main()
{
    int n;
    printf("enter the no. of disk:");
    scanf("%d",&n);
    TOH(n,'A','C','B');
}
