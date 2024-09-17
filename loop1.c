#include<stdio.h>
void main()
{
int i, j;

// Outer loop
for (i = 1; i <= 2; ++i) {
  printf("\nOuter: %d\n", i);  // Executes 2 times

  // Inner loop
  for (j = 1; j <= 3; ++j) {
    printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
    printf("\n %d * %d = %d\n",i,j,i*j);
  }
}
}

/*
Outer: 1
 Inner: 1
1 * 1 = 1
 Inner: 2
1 * 2 = 2
 Inner: 3
1 * 3 = 3
Outer: 2
 Inner: 1
2 * 1 = 2
 Inner: 2
2 * 2 = 4
 Inner: 3
2 * 3 = 6

*/