#include<stdio.h>
void main() {
float a, b;
float res;
char ops;

printf("Enter operation +, -, *, / :");
scanf("%c", &ops);

printf("Enter a and b: ");
scanf("%f %f", &a, &b);

/*
if(ops=='+'){
res = a+b;

}
else if(ops=='-'){
res = a-b;

}
else if(ops=='*'){
res = a*b;

}
else if(ops=='/'){
res = a/b;

}
else {
printf("Wrong input");
}

printf("Result is %f", res);
*/

switch(ops){
case '+': res = a+b;
printf("Result is %f", res);
break;
case '-': res = a-b;
printf("Result is %f", res);
break;
case '*': res = a*b;
printf("Result is %f", res);
break;
case '/': res = a/b;
printf("Result is %f", res);
break;
default: printf("Wrong input.");
}
}

