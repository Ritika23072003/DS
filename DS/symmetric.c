#include<stdio.h>

void create(int c[])
{
    int i,n;

 printf("enter the size of array which should be less than 11:\n");
    scanf("%d",&n);
    c[0]=n;
    printf("enter arrray elements:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&c[i]);
    }
}
void print(int c[])
{
    int n,i;
    n=c[0];
    printf("the array is:\n");
    for(i=1;i<=n;i++)
    printf("%d\n",c[i]);
}
void difference(int set1[],int set2[],int set3[])

{
    int n,i;
    n=set1[0];
    set3[0]=0;
    for(i=1;i<=n;i++)
    {
        if(!member(set2,set1[i]))
            set3[++set3[0]]=set1[i];
    }
}
void unions(int set1[],int set2[],int set3[])
{
    int i,n;
    n=set1[0];
    for(i=0;i<=n;i++)

        set3[i]=set1[i];
        n=set2[0];
        for(i=1;i<=n;i++)
        {
            if(!member(set3,set2[i]))
                set3[++set3[0]]=set2[i];
        }
}
int member(int set[],int x)
{
    int n ,i;
    n=set[0];
    for(i=1;i<=n;i++)
    {
        if(set[i]==x)
            return 1;
    }
    return 0;
}
void main()
{
 int a[10],b[10],c[10],d[10],s[20];
create(a);
print(a);
create(b);
print(b);
difference(a,b,c);
difference(b,a,d);
unions(c,d,s);
printf("after symmetric difference: ");
print(s);
}

