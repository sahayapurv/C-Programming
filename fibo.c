/*
Fibonacci number

Initial number = 0, 1
Add 0 + 1 = 1
Add 1 + 1 = 2
Add 1 + 2 = 3
Add 2 + 3 = 5
Add 3 + 5 = 8
Add 5 + 8 = 13

Consider 'b' to be new 'a' and 'sum' to be new 'b'
*/

#include<stdio.h>
void main()
{
int a=0,b=1;
int noofterms, sum=0;
printf("Enter no. of terms: ");
scanf("%d",&noofterms); //6
printf("%d\n%d\n",a,b);
for(int i=0;i<noofterms;i++)
{
 sum = a + b; // sum = 1,2,3,5,8,13
 printf("%d\n",sum); //1,2,3,5,8,13
 a=b; //a=1,1,2,3,5,8
 b=sum; //b=1,2,3,5,8,13
}

}