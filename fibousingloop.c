// Sum of Fibonacci numbers upto n terms using iteration. fib series = 0 1 1 2 3 5 8 13 21 34.....
// if n = 10, sum = 0 + 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21 + 34 = 88
#include<stdio.h>

int sumfibonacci(int n);

void main()
{
printf("Fibonacci series is: %d",sumfibonacci(10));
}

int sumfibonacci(int x)
{
int a = 0, b = 1;
int c = 0;
int sum = 1;
for(int i = 0;i < x - 2; i++)
{
c = a + b; // for i = 0, c = 1, a = 1, b = 1
sum = sum + c;
a = b;
b = c;
}
return sum;
}

// for i = 0, c = 1, a = 1, b = 1
// for i = 1, c = 2, a = 1, b = 2
// for i = 2, c = 3, a = 2, b = 3
// for i = 3, c = 5, a = 3, b = 5
// for i = 4, c = 8, a = 5, b = 8
// for i = 5, c = 13, a = 8, b = 13
// for i = 6, c = 21, a = 13, b = 21
// for i = 7, c = 34, a = 21, b = 34







