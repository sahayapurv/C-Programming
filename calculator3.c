// parameterized function
#include<stdio.h>

int sum(int x, int y); // function declarations
int subtraction(int x, int y);
int division(int x, int y);
int mult(int x, int y);

//int x, y;

//x = 6, y = 3;

void main() {
int x, y;
printf("Enter x and y:");
scanf("%d %d", &x, &y);
printf("Sum is %d\n",sum(x, y));
printf("Sub is %d\n",subtraction(x, y));
printf("Div is %d\n",division(x, y));
printf("Mult is %d\n",mult(x, y));
}

// function definitions
int sum(int x, int y) {
int result = x + y;
//printf("X is %d\n",x);
return result;
//printf("Sum Result is %d\n",result);
}

int subtraction(int x, int y) {
int result = x - y;
return result;
//printf("Sub Result is %d\n",result);
}

int division(int x, int y) {
int result = x / y;
return result;
//printf("Div Result is %d\n",result);
}

int mult(int x, int y) {
int result = x * y;
return result;
//printf("Mult Result is %d\n",result);
}
