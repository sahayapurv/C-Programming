#include<stdio.h>
void main() {
//linear search
int arr[5]; // limitation = we must know the prescribed immutable size of the array
int a, b, c, d, e;
printf("Enter the data: ");
scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
arr[0] = a;
arr[1] = b;
arr[2] = c;
arr[3] = d;
arr[4] = e;
int length = sizeof(arr)/sizeof(arr[0]);
printf("Array is: ");
int sum=0;
printf("Length = %d\n", length); // 5
for(int i=0; i<length; i++)
{
sum = sum + arr[i];
printf("Old array: %d\t", arr[i]);
}
arr[5] = 25;
printf("\t%d\n",arr[5]);


//int length2 = length + 1;
int length2 = sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<length2; i++) // Problem: We can't use more than the prescribed length
{
printf("New array: %d\t", arr[i]);
}

printf("Length = %d\n", length2); //6
//printf("\nSum = %d",sum);
}