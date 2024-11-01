#include<stdio.h>
#include<math.h>
void main() {
int x,n,sum=0;
// sum = 1 - x + x^2 - x^3 ......
printf("Enter x and n: ");
scanf("%d %d", &x, &n);
int i=0;
while(i<=n)
{
sum = sum + pow(-1,i)*pow(x,i);
printf("Summation from 1 to %d^%d is %d\n",x,i,sum);
i++;
}
printf("Sum is %d",sum);

}