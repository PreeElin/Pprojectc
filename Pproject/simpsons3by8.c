//Lab 25: Write a C program to integrate a given function using Simpson’s 3.8 rule
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) sqrt(1-x*x);
int main()
{
	float x0,x1,x2,x3,h,I,f0,f1,f2,f3;	
	printf("Enter upper limit\n");
	scanf("%f",&x3);
	printf("Enter lower limit\n");
	scanf("%f",&x0);
	h = (x3-x0)/3;
	x1 = x0+h;
	x2 = x0+2*h;3
	x3 = x0+3*h;	
	f0 = f(x0);
	f1 = f(x1);
	f2 = f(x2);
	f3 = f(x3);
	I  = 3*h*(f0+3*f1+3*f2+f3)/8;
 	printf("Integration =%f",I);
	getch();
	return 0;
}
