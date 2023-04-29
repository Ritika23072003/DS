//(a) WAP to find average of n given number
#include<stdio.h>
void main()
{
  int n,i,a[20];
  float avg,sum=0;
  printf("Enter number of term:-");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
    for(i=1;i<=n;i++)
  {
    sum+=a[i];
    avg=sum/n;
  }

    printf("\n avg of n no.=%f\n",avg);
    printf(" RITIKA 2100320130140");

}














