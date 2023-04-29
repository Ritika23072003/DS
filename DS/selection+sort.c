//WAP to implement selections sort
#include<stdio.h>
void main()
{
    int a[50],i,j,n,min,temp;
    printf("Ritika\n2100320130140");
    printf("\nenter the no. element:");
    scanf("%d",&n);
    printf("enter the array element:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)

            {
            if(a[min]>a[j])
            min=j;
            }

    if(min!=1)
    {
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    }
    printf("\n sorted array:");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");
}
