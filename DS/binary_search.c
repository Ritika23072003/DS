//C program for binary search
#include <stdio.h>
int main()
{
  int c, f, l, m, n, s, array[100];
  printf("Ritika\n2100320130140\n");
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  printf("Enter value to find\n");
  scanf("%d", &s);
  f = 0;
  l = n - 1;
  m = (f+l)/2;

  while (f <= l) {
    if (array[m] < s)
      f = m + 1;
    else if (array[m] == s) {
      printf("%d found at location %d.\n", s, m+1);
      break;
    }
    else
      l = m - 1;
    m = (f + l)/2;
  }
  if (f > l)
    printf("Not found! %d isn't present in the list.\n", s);
  return 0;
}

