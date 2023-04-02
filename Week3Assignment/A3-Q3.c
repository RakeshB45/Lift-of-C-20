#include <stdio.h>
int main()
{
   int first,second,sum;
   int *a,*b;

   printf("Enter two integers to add\n");
   scanf("%d %d", &first, &second);

   a = &first;
   b = &second;

   sum = *a + *b;

   printf("Sum of the numbers = %d\n", sum);

   return 0;
}