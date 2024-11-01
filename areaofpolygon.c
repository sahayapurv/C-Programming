#include<stdio.h>
int area1(int a);
int area2(int x, int y);
float area3(float a);

void main() {
printf("Area of a square: %d\n", area1(5));
printf("Area of a rectangle: %d\n", area2(5,6));
printf("Area of a circle: %f\n", area3(5.0));
}

int area1(int a){
return a*a;
}

int area2(int m, int n) {
return m*n;
}

float area3(float x) {
return 3.14*x*x;
}
