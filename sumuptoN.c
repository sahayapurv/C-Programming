#include<stdio.h>
void main(){
int num;
printf("Enter number: ");
scanf("%d",&num); // num = 4
int sum=0;
int i=1;
while(i<=num) {
sum = sum + i;
printf("New sum is %d\n",sum); // 1, 3, 6,10
i++;
}
printf("Sum upto %d is %d",num,sum);
}
