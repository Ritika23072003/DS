//WAP to implement additions and multiplications of 2D matrix
#include<stdio.h>
void addMatrix(int a[10][10],int b[10][10],int c[10][10])
{
    int i,j,r,k;
      for(i=0;i<r;i++)
   {
       for(j=0;j<k;j++)
       {
           c[i][j]=a[i][j]+b[i][j];
       }
   }
}

void readmtrix(int m[10][10])
{
  int k,r,i,j;

  for(i=0;i<r;i++)
   {
       for(j=0;j<k;j++)
       {
           printf("%d",&m[i][j]);
       }
       printf("\n");

   }
}
void displaymtrix(int m[10][10])
{
  int k,r,i,j;

  for(i=0;i<r;i++)
   {
       for(j=0;j<k;j++)
       {
           printf("%d",&m[i][j]);
       }
       printf("\n");

   }
}
int main()
{
    int a[10][10],b[10][10],c[10][10],r,k;
    printf("enter row and column :");
    scanf("%d%d",&r,&k);

    printf("enter 1st matrix:");
    int readmatrix(a,r,k);
    printf("enter 2nd matrix:");
    readmatrix(b,r,k);

    int addmatrix(a,b,c,r,k);
    printf("added matrix:\n");
    int displaymatrix(c,r,k);
}
