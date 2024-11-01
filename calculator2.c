// function calling with return types
#include<stdio.h>

int sum();
int subtraction();
int division();
int mult();

int x, y; // global variables

//x = 6, y = 3;

void main() {
printf("Enter x and y:");
scanf("%d %d", &x, &y);
printf("Sum is %d",sum());
printf("Sub is %d",subtraction());
printf("Div is %d",division());
printf("Mult is %d",mult());
}

int sum() {
int result = x + y;
return result;
//printf("Sum Result is %d\n",result);
}

int subtraction() {
int result = x - y;
return result;
//printf("Sub Result is %d\n",result);
}

int division() {
int result = x / y;
return result;
//printf("Div Result is %d\n",result);
}

int mult() {
int result = x * y;
return result;
//printf("Mult Result is %d\n",result);
}
