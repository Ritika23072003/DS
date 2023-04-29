//WAP to implement bubble sort
#include<stdio.h>
void main()
{
    int n,i,j,temp;
    printf("Ritika\n2100320130140");
    printf("\nenter the no. of element:");
    scanf("%d",&n);
    int a[n];
    printf("enter the integer:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-i;j++)
      {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
      }
    }
    printf("sorted list:");
    for(i=0;i<n;i++)
        printf("%d",a[i]);

}
