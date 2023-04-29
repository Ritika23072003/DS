//WAP to implement linear search
#include <stdio.h>
int main()
{
   int a[100],s,i,n,count=0;
   printf("ritika\n2100320130140\n");
   printf("Enter number of elements in array\n");
   scanf("%d",&n);

   printf("Enter %d numbers\n",n);

   for (i=0;i<n;i++)
      scanf("%d",&a[i]);

   printf("Enter a number to search\n");
   scanf("%d",&s);

   for (i=0;i<n;i++) {
      if (a[i]==s) {
         printf("%d is present at location %d.\n",s,i+1);
         count++;
      }
   }
   if (count==0)
      printf("%d isn't present in the array.\n",s);
   else
      printf("%d is present %d times in the array.\n",s,count);

   return 0;
}
