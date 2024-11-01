#include<stdio.h>
void main()
{
   int num;
   printf("Enter number: ");
   scanf("%d", &num);
   if(num>=0)
   {
      if(num%2==0)
         {printf("%d is even positive", num);}
      else 
         {printf("%d is odd positive", num);}
   }
   else 
      {printf("%d is negative", num);}
}