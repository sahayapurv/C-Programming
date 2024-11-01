// Recursion:  Function calling itself

#include<stdio.h>
int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

/*
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);  // 10 + sum(9) = 10 + 9 + sum(8) = 10 + 9 + 8 + sum(7)
  } else {
    return 0;
  } // 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0
}
*/

// iterative method
int sum(int k) {
int sumtotal=0;
for(int i = 0; i<=k; i++)
{
sumtotal = sumtotal + i;
}
return sumtotal;
}
