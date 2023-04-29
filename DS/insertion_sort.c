//WAP to implement insertion sort
#include<stdio.h>
void main()
{
    int n,a[50],i,j,t,flag=0;
    printf("Ritika\n2100320130140\n");
    printf("enter no. of element:");
    scanf("%d",&n);
    printf("enter integer");
    for(i=0;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=n-1;i++)
    {
        t=a[i];
    for(j=i-1;j>=0;j--)
    {
    if(a[j]>t)
    {
        a[j+1]=a[j];
    flag=1;

    }
    else
            break;
    }
    if(flag)
        a[j+1]=t;
    }
    printf("sorted array:\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
}
